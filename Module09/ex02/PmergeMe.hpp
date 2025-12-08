/* ************************************************************************** */
/*                    file: PmergeMe.hpp                                      */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/17 15:02 by ybounite                   */
/*                    Updated: 2025/11/17 15:02 by ybounite                   */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <sstream>
# include <string>
# include <cstdlib> 
# include <vector>
# include <cctype>
# include <set>
# include <algorithm>
/* ************************************************************************** */
/*                          PmergeMe Class                                    */
/* ************************************************************************** */
typedef std::vector<int>::iterator _it;

class PmergeMe {

public:

	PmergeMe( void );
	PmergeMe( const  PmergeMe &Other );
	PmergeMe &operator=( const PmergeMe &Other );
	~PmergeMe( void );
	void	hanleArgument( char **const arv );
	bool	IsDigit( std::string &str);
	void	MergeInsertionSort(std::vector<int> &vec, int PairLevel);
	void	PrintBefor( void );
	void	PrintAfter( void );
	void	sort(std::vector<int> &vec);
	void	InsertionPhase(std::vector<int> &vec, int PairLevel);

private:

	std::vector<int> _StoredData;
};

int	check = 0;

template <typename T>
T	next(T  it, int steps) {
	std::advance(it, steps);
	return it;
}

template <typename T>
bool	_cmop(T a, T b) {
	check++;
	return *a > *b;
}
