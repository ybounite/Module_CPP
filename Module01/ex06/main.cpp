
#include "Harl.hpp"

int	main(int arc, char **arv)
{
	if (arc != 2)
		return 1;
	Harl Harl1;

	Harl1.complain((std::string)arv[1]);
	return 0;
}