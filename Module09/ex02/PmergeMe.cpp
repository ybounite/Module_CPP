/* ************************************************************************** */
/*                    file: PmergeMe.cpp                                      */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/17 15:02 by ybounite                   */
/*                    Updated: 2025/11/17 15:02 by ybounite                   */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {}

PmergeMe::PmergeMe( const  PmergeMe &Other ) {
	*this = Other;
}

PmergeMe &PmergeMe::operator=( const PmergeMe &Other ) {
	if (this != &Other) {
		this->_StoredData = Other._StoredData;
	}
	return *this;
}

PmergeMe::~PmergeMe( void ) {}

bool	PmergeMe::IsDigit( std::string &str) {

	short	i = 0;
	if (str[i] == '+') i = 1;
	for (; str[i]; i++) {
		if (!std::isdigit(str[i])) return false;
	}
	return true;
}

void	PmergeMe::PrintBefor(){
	std::cout << "Before : ";
	for (_it it; it != _StoredData.end(); it++)
		std::cout << *it << " " ;
	std::endl(std::cout);
}

void	printVector(std::vector<int>vec) {
	static int Level = 1;
	std::cout << "Pair Level: " << Level++ << std::endl;
	for (_it i = vec.begin(); i != vec.end(); i++)
		std::cout << " " << *i ;
	std::cout << std::endl;

}

void	PmergeMe::PrintAfter( void ) {

	std::cout << "After : ";
	for (_it it; it != _StoredData.end(); it++)
		std::cout << *it << " " ;
	std::endl(std::cout);
}
/*
 * Level 1
 * [(2,7) | (1,3) | (8,20) | (0,14) 88]
 * Level 2
 * [(1,3)(2,7) | (0,14)(8,20) 88]
 * */

void	PairingPhase( std::vector<int> &vec, int Pair_Level ) {
	int		pair_units_nbr = vec.size() / Pair_Level;
	int		jumb = Pair_Level * 2;
	bool	is_odd = (pair_units_nbr % 2 == 1); // is odd number

	if (pair_units_nbr < 2) return ; // neded one two pairs 
	_it		Start = vec.begin() ;
	_it 	Last = next(Start, (Pair_Level * pair_units_nbr) - 1);
	_it		End = next(Last, -(is_odd * Pair_Level)); // Pair_level is 1

	for (_it i = Start; i < End; std::advance(i, jumb)) {
		_it		StartBlock = next(i, Pair_Level - 1); // 7 
		_it		LastBlock = next(i, (Pair_Level * 2) - 1);
		if (_cmop(StartBlock, LastBlock))
			std::cout << "yeas " << *StartBlock <<" gred theen : " << *LastBlock << std::endl;
	}
	
}

void	PmergeMe::sort( std::vector<int> &vec ) {
	if (vec.size() == 1) {
		PrintBefor();
		return ;
	}
	PairingPhase(vec, 1);
}

void	PmergeMe::hanleArgument( char **const arv) {

	std::set<int>	set_;
	for (int index = 1; arv[index]; index++) {
		std::istringstream	ss(arv[index]);
		while (!ss.eof()) {
			std::string		token;
			ss >> token;
			if (token.empty())
				throw std::invalid_argument("Argument is Empty");
			if (std::string("0123456789+-").find(token[0]) == std::string::npos)
        			throw std::invalid_argument("Arguments is invalid");
			// # problem in -a
			if (token[0] == '-') 
				throw std::invalid_argument("Argument Is Negative");
			if (!IsDigit(token))
				throw std::invalid_argument("An Argument is invalid");
			std::pair<std::set<int>::iterator, bool> check = set_.insert(std::atoi(token.c_str()));
		        if (check.second == false)
                		throw std::invalid_argument("Some Duplicate Found");
			//std::cout << "string : " << token << std::endl;
			//std::cout << "stringstream : " + ss.str() << std::endl;
			this->_StoredData.push_back(std::atoi(token.c_str()));
		}
		//std::cout << ss.str() << std::endl;
	}
	sort(this->_StoredData);
}

