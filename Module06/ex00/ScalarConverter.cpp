/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybounite <ybounite@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 12:49:26 by ybounite          #+#    #+#             */
/*   Updated: 2025/10/30 20:03:27 by ybounite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {

}

ScalarConverter::ScalarConverter( const ScalarConverter &Other ) {
	*this = Other;
}

ScalarConverter	& ScalarConverter::operator=( const ScalarConverter &Other ) {
	(void)Other;
	return *this;
}

ScalarConverter::~ScalarConverter( void ) {
	
}

bool	is_inf(const std::string &literal) {
	return (literal == "+inf" || literal == "-intf"
		|| literal == "+inff" || literal == "-inff");
}

void	ScalarConverter::convert( std::string literal ) {

	char	*end = NULL;
	double	value;

	if (literal.empty()) {
		std::cout << "string is empty" << std::endl;
		return ;
	}
	// Handle special floating literals
	if (literal == "nan" || literal == "nanf")
		value = std::numeric_limits<double>::quiet_NaN();
	else if (literal == "+inf" || literal == "+inff")
		value = std::numeric_limits<double>::infinity();
	else if (literal == "-inf" || literal == "-inff")
		value = -std::numeric_limits<double>::infinity();
	else if (literal.length() == 1) {
		if (!std::isdigit(literal[0]))
			value = static_cast<char>(literal[0]);	
		else
			value = strtod(literal.c_str(), &end);
	}
	else {
		if (literal[literal.length() -1] == 'f')
			literal.erase(literal.length() - 1);
		value = strtod(literal.c_str(), &end);
		std::cout << "number : " << value << "\nstring : " << end << std::endl;
		if (end[0] != '\0') {
			std::cerr << "Error: invalid literal" << std::endl;
			return ;
		}
	}
	convertToChar(value);
	convertToInt(value);
	convertToFloat(value);
	convertToDouble(value);

}

void	ScalarConverter::convertToInt( const double value ) {
	std::cout << "int  : ";
	if (std::isnan(value) || value > INT_MAX || value < INT_MIN)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}

void	ScalarConverter::convertToChar( const double value ) {

	std::cout << "char : ";
	if (std::isnan(value) || value < 0 || value > 127)
		std::cout << "impossible";
	else if (std::isprint(static_cast<char>(value)))
		std::cout << static_cast<char>(value) << std::endl;
	else
		std::cout << "Non displayable";

	std::cout << std::endl;
}
	
void	ScalarConverter::convertToDouble( const double value ) {
	std::cout << "double : " << static_cast<double>(value) << std::endl;

}
void	ScalarConverter::convertToFloat( const double value ) {
	std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;

}
