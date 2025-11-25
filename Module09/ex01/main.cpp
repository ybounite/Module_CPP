/* ************************************************************************** */
/*                    file: main.cpp                                          */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/24 16:04 by ybounite                   */
/*                    Updated: 2025/11/24 16:04 by ybounite                   */
/* ************************************************************************** */

# include "RBN.hpp"

int	main(int arc, char **arv) {
	if (arc != 2) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	try {
		std::string	input = arv[1];
		if (input.empty()) throw std::runtime_error("Error");
		RBN	rbn;
		std::cout << rbn.ExecuteRPN(input) << std::endl;
	} catch( std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
