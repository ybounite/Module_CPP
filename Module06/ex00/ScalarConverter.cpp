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
		if (end[0] != '\0' || literal[literal.length() - 1] == '.' || literal[0] == '.') {
			convertToChar(value, true);
			convertToInt(value, true);
			convertToFloat(value, true);
			convertToDouble(value, true);
			return ;
		}
	}
	convertToChar(value);
	convertToInt(value);
	convertToFloat(value);
	convertToDouble(value);

}

void	ScalarConverter::convertToInt( const double value, bool	isImpossible) {
	std::cout << "int  : ";
	if (std::isnan(value) || value > INT_MAX || value < INT_MIN || isImpossible)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout << std::endl;
}

void	ScalarConverter::convertToChar( const double value, bool isImpossible) {

	std::cout << "char : ";
	if (std::isnan(value) || value < 0 || value > 127 || isImpossible)
		std::cout << "impossible";
	else if (std::isprint(static_cast<char>(value)))
		std::cout << static_cast<char>(value);
	else
		std::cout << "Non displayable";

	std::cout << std::endl;
}
	
void	ScalarConverter::convertToDouble( const double value, bool isImpossible) {

	if (isImpossible)
		std::cout << "double : impossible" << std::endl;
	else
		std::cout << "double : " << static_cast<double>(value) << std::endl;

}
void	ScalarConverter::convertToFloat( const double value, bool isImpossible) {

	if (isImpossible)
		std::cout << "float : impossible" << std::endl;
	else
		std::cout << "float : " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;

}
