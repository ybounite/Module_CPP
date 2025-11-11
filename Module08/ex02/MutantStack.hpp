/* ************************************************************************** */
/*                    file: MutantStack.hpp                                   */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/11 09:23 by ybounite                   */
/*                    Updated: 2025/11/11 09:23 by ybounite                   */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <string>
# include <stack>

/* ************************************************************************** */
/*                          MutantStack Class                                 */
/* ************************************************************************** */

template<typename T>
class MutantStack : public std::stack<T> {
public:

	MutantStack( void ){}
	~MutantStack( void ){}

	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;

	iterator	begin() {
		return this->c.begin(); 
	}
	iterator	end() {
		return this->c.end(); 
	}
};
