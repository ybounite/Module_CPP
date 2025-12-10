/* ************************************************************************** */
/*                    file: main.cpp                                          */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/17 15:08 by ybounite                   */
/*                    Updated: 2025/11/17 15:08 by ybounite                   */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int	check = 0;

int	main(int arc, char **arv) {

	if (arc == 1) {
        	std::cerr << "Please Enter Some Arguments So I Have Something To Do";
		std::endl(std::cerr);
		return 1;
	}
	try {
		PmergeMe	PmergeMe_;

		PmergeMe_.hanleArgument(arv);
	}catch ( std::exception &e ) {
		std::cerr << "ERROR: " << e.what();
		std::endl(std::cerr);
		return 1;
	}
	return 0;
}
