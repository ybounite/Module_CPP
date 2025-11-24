/* ************************************************************************** */
/*                    file: BitcoinExchange.hpp                               */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/16 17:49 by ybounite                   */
/*                    Updated: 2025/11/16 17:49 by ybounite                   */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <string>
# include <cstring>
# include <map>
# include <vector>
# include <fstream>
# include <sstream>
# include <cstdlib>
# include <climits>
/* ************************************************************************** */
/*                          BitcoinExchange Class                             */
/* ************************************************************************** */

class BitcoinExchange {
public:

	BitcoinExchange( void );
	BitcoinExchange( const  BitcoinExchange &Other );
	BitcoinExchange &operator=( const  BitcoinExchange &Other );
	~BitcoinExchange( void );

	static bool				IsValidateDate(short Days, short Month, short Year);
	static short				NumberOfDaysInMonth(short Month, short Year);
	static bool				isValudeMonth(short Month);
	static bool				isLeapYear(short year);

	void				SumelationBitcionExchange(std::string InputFile);
	std::string			getFileNameDataBase() const;
	void    			StringToDate(std::string String);
	std::map<std::string, double>	ConvertLineToRecordData(const std::string &line);
	std::map<std::string, double>	ConvertLineToRecordInput(const std::string &line);
	void				LoadDataFromFileDataBase( std::string FileName );
	void				LoadDataFromFileInput( std::string FileName );

private:
	std::map<std::string, double> 			_records;
	std::map<std::string, double> 			_Data;
	//std::string					_DataBase;
	//typedef	std::map<std::string, double>::const_iterator Iterator;
};
