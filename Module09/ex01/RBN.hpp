/* ************************************************************************** */
/*                    file: RBN.hpp                                           */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/24 16:01 by ybounite                   */
/*                    Updated: 2025/11/24 16:01 by ybounite                   */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <string>
# include <stack>
# include <sstream>
# include <cstdlib>

/* ************************************************************************** */
/*                          RBN Class                                         */
/* ************************************************************************** */

class RBN {
public:

	RBN( void );
	RBN( const  RBN &Other );
	RBN &operator=( const RBN &Other );
	~RBN( void );

	int	ExecuteRPN(const std::string& input);
	double	evalRBN( void );

	static bool	IsValidNumber( const std::string& str );
	static bool	IsValidOperator( const std::string& str );
private:
	std::stack<int>		_Records;
};
