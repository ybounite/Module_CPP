/* ************************************************************************** */
/*                    file: Span.hpp                                          */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/10 17:21 by ybounite                   */
/*                    Updated: 2025/11/10 17:21 by ybounite                   */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

/* ************************************************************************** */
/*                          Span Class                                        */
/* ************************************************************************** */

class Span {
public:

	Span( void );
	Span( unsigned int N );
	Span( const  Span &Other );
	Span	&operator=( const Span &Other );
	~Span( void );

	void	addNumber( int N );
	int	shortestSpan( void );
	int	longestSpan( void );

private:
	unsigned int			_maxSize;
	std::vector<int>		_vNumber;
	std::vector<int>::iterator	_it;
};
