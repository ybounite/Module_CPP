/* ************************************************************************** */
/*                    file: main.cpp                                          */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/11 09:23 by ybounite                   */
/*                    Updated: 2025/11/11 09:23 by ybounite                   */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	mstack.push(1000);
	MutantStack<int>::const_iterator const_it = mstack.begin();
	MutantStack<int>::const_iterator const_ite = mstack.end();
	std::cout << "print const iterator "<< std::endl;
	while (const_it != const_ite){
		std::cout << *const_it << " ";
		++const_it;
	}
	std::stack<int> s(mstack);
	s.push(100);
	std::cout << "\nall element of this stack\n";
	while (!s.empty()){
		std::cout << s.top() << std::endl;
		s.pop();
	}
	return 0;
}
