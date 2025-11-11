
/* ************************************************************************** */
/*                    file: Span.cpp                                          */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/10 17:21 by ybounite                   */
/*                    Updated: 2025/11/10 17:21 by ybounite                   */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span( void ) : _maxSize(0){

}

Span::Span( unsigned int N ) : _maxSize(N) {
	
}

Span::Span( const  Span &Other ) : _maxSize(Other._maxSize) {
	*this = Other;
}

Span	&Span::operator=( const Span &Other ) {
	if (this != &Other) {
		this->_maxSize = Other._maxSize;
		for (size_t i = 0; i < this->_maxSize; i++)
			_vNumber.push_back(Other._vNumber[i]);
	}
	return *this;
}

Span::~Span( void ) {

}

void	Span::addNumber( int N ) {
	if (_vNumber.size() >= _maxSize)
		throw std::runtime_error("Out of range");
	else
		_vNumber.push_back(N);
}

int	Span::shortestSpan( void ) {
	
	if (_vNumber.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");
	std::sort(this->_vNumber.begin(),this->_vNumber.end());
	std::vector<int> RangeToNumber;
	for (size_t index = 0; index < this->_maxSize; index++) {
		for (size_t NextIndex = index + 1; NextIndex < this->_maxSize; NextIndex++)
			RangeToNumber.push_back(std::abs(this->_vNumber[index] - this->_vNumber[NextIndex]));
	}
	std::sort(RangeToNumber.begin(), RangeToNumber.end());
	return (RangeToNumber[0]);
}

int	Span::longestSpan( void ) {
	if (_vNumber.size() < 2)
		throw std::runtime_error("Not enough numbers to find a span");
	int	minValue = *std::min_element(_vNumber.begin(), _vNumber.end());
	int	maxValue = *std::max_element(_vNumber.begin(), _vNumber.end());
	return (maxValue - minValue);
}

