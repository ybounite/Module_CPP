/* ************************************************************************** */
/*                    file: main.cpp                                          */
/*                    by: ybounite <ybounite@student.1337.ma>                 */
/*                                                                            */
/*                    Created: 2025/11/16 17:56 by ybounite                   */
/*                    Updated: 2025/11/16 17:56 by ybounite                   */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: could not open file."<< std::endl;
		return 1;
	}
	try {
		BitcoinExchange Bit;
		Bit.LoadDataFromFile();
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return 0;
}
