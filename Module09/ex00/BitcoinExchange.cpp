/* ************************************************************************** */
/*                    file: BitcoinExchange.cpp                               */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/16 17:49 by ybounite                   */
/*                    Updated: 2025/11/16 17:49 by ybounite                   */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) {
}

BitcoinExchange::BitcoinExchange( const  BitcoinExchange &Other )  {
	*this = Other;

}

BitcoinExchange & BitcoinExchange::operator=( const  BitcoinExchange &Other ) {
	if (this != &Other) {
		this->_records = Other._records;
		this->_Data = Other._Data;
	}
	return *this;
}

BitcoinExchange::~BitcoinExchange( void ) {
}

bool	BitcoinExchange::isLeapYear(short year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

bool	BitcoinExchange::isValudeMonth(short Month) {
	return (Month > 0 && Month < 13);
}
short BitcoinExchange::NumberOfDaysInMonth(short Month, short Year) {

	if (!isValudeMonth(Month)) return 0;
	short NumberOfDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

bool	BitcoinExchange::IsValidateDate(short Days, short Month, short Year) {
	return !(Days <= 0 || NumberOfDaysInMonth(Month, Year) < Days);
}

std::map<std::string, double>	BitcoinExchange::ConvertLineToRecordData(const std::string &line) {
	size_t pos = line.find(',');
	if (pos == std::string::npos)
		throw std::runtime_error("Error: bad line : " + line);

	std::string date = line.substr(0, pos);
	std::string valueStr = line.substr(pos + 1);
	double value = std::atof(valueStr.c_str());
	
	std::map<std::string, double> m;
	m[date] = value;
	return m;
}

void    BitcoinExchange::StringToDate(std::string Str) {

	short	Days, Month, Year;

	if (Str.length() != 10 || Str[4] != '-' || Str[7] != '-')
		throw std::runtime_error("Error bad input => " + Str);
	Year = std::atoi(Str.substr(0, 4).c_str());
	Month = std::atoi(Str.substr(5, 2).c_str());
	Days = std::atoi(Str.substr(8).c_str());
	if (!IsValidateDate(Days, Month, Year)) throw std::runtime_error("Error: bad input => " + Str);
	if (Year < 2009) throw std::runtime_error("Error: date too early. " + Str);
}

std::map<std::string, double>	BitcoinExchange::ConvertLineToRecordInput(const std::string &line){
	std::stringstream		ss(line);
	std::string			word;
	std::map<std::string, double>	map;
	char				*end = NULL;
	ss >> word;
	std::string	data = word;

	StringToDate(word);
	ss >> word;
	if (word != "|") {
		std::string	MessageError = word;
		throw std::runtime_error("Error: bad input =>" + data);
	}
	ss >> word;

	double		value = strtod(word.c_str(), &end);
	if (*end != '\0') throw std::runtime_error("Error: invalude exchange!");
	if (value < 0) throw std::runtime_error("Error: not a positive number.");
	if (value > 1000) throw std::runtime_error("Error: too large a number.");
	map[data] = value;

	return map;
}

void	BitcoinExchange::LoadDataFromFileInput( std::string FileName ) {

	std::fstream	File;
	std::string	Line;

	File.open(FileName.c_str(), std::ios::in);
	if (!File.is_open()) {
		std::string errorMessage = "Error: could not open file: " + FileName;
		throw std::runtime_error(errorMessage);
	}
	
	std::getline(File, Line);
	if (Line.empty())
		throw std::runtime_error("Input File Is Empty");	
	if (Line != "date | value")
		throw std::runtime_error("Something Missing or False About The Input File");
	while (std::getline(File, Line)) {
		try {
			if (Line.empty()) continue ;
			std::map<std::string, double> temp = ConvertLineToRecordInput(Line);
			std::map<std::string, double>::iterator it = _records.lower_bound(temp.begin()->first);
			//std::cout << "temp first: " << temp.begin()->first <<" | temp Second: " << temp.begin()->second << std::endl;
			if (it->first != temp.begin()->first) {
				if (it == temp.begin()) {
					std::cerr << "Error: no earlier date found for " << temp.begin()->first << std::endl;
					continue ;
				}
				it--;
			}
			double result = temp.begin()->second * it->second;
			std::cout << temp.begin()->first << " => " << temp.begin()->second << " = " << result << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	File.close();
}

void	BitcoinExchange::LoadDataFromFileDataBase(std::string FileName)
{
	std::fstream file;
	std::string  line;
	
	file.open(FileName.c_str(), std::ios::in);
	if (!file.is_open()) {
		std::string errorMessage = "Error: could not open file: " + FileName;
		throw std::runtime_error(errorMessage);
	}

	while (std::getline(file, line)) {
		if (line.empty()) continue;
	
		_Data = ConvertLineToRecordData(line);
		_records.insert(_Data.begin(), _Data.end());
	}
	file.close();
}

void	BitcoinExchange::SumelationBitcionExchange(std::string InputFile) {
	LoadDataFromFileDataBase("data.csv");
	LoadDataFromFileInput(InputFile);
}
