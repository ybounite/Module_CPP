/* ************************************************************************** */
/*                    file: RBN.cpp                                           */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/24 16:01 by ybounite                   */
/*                    Updated: 2025/11/24 16:01 by ybounite                   */
/* ************************************************************************** */

# include "RBN.hpp"

RBN::RBN( void ){
}

RBN::RBN( const  RBN &Other ) { *this = Other; }

RBN &RBN::operator=( const RBN &Other ) {
	if (this != &Other) 
		this->_Records = Other._Records;
	return *this;
}

RBN::~RBN( void ) { }

bool	RBN::IsValidNumber(const std::string& str) {

	if (str.empty()) return false;

	size_t	i = 0;
	int	number = 0;

	if (str[0] == '-' ) {
		if (str.size() == 1) return false;
		i = 1;
	}

	for (; i < str.size(); ++i)
	if (!std::isdigit(str[i])) return false;
	
	number = std::atoi(str.c_str());
	if (number > 9) return false;

	return true;
}

bool	RBN::IsValidOperator(const std::string& str) {

	if (str.size() != 1) return false;

	char c = str[0];
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

int	ApplyOperator(int a, int b, char c) {
	int Resulte = 0;
	switch ( c ) {
	case '+':
		return a + b;	
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		if (b == 0)
        	throw std::runtime_error("Error: division by zero");
		return a / b;
	}
	return Resulte;
}

int	RBN::ExecuteRPN(const std::string& input) {
	std::stringstream ss(input);
	std::string token;

	while (ss >> token) {

		if (IsValidNumber(token))
			_Records.push(std::atoi(token.c_str()));
		else if (IsValidOperator(token)) {

			if (_Records.size() < 2)
				throw std::runtime_error("Error: insufficient values");

			int b = _Records.top(); _Records.pop();
			int a = _Records.top(); _Records.pop();

			int result = ApplyOperator(a, b, token[0]);
			_Records.push(result);
		}
		else
			throw std::runtime_error("Error: invalid token '" +token+ "'");
	}

	if (_Records.size() != 1)
		throw std::runtime_error("Error: malformed expression");

	int result = _Records.top(); _Records.pop();
	return result;
}
