
#include "Harl.hpp"

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void		Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n" ;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void		Harl::info( void )
{
	std::cout << "[ INFO ]\n" ;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void		Harl::warning( void )
{
	std::cout << "[ WARNING ]\n" ;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void		Harl::error( void )
{
	std::cout << "[ ERROR ]\n" ;
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void		Harl::complain( std::string level )
{

	void (Harl::*FunPtr[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	switch (getTypeLevel(level))
	{
		case enDebug:
			(this->*FunPtr[enDebug])();
			// fall through
		case enInfo:
			(this->*FunPtr[enInfo])();
			// fall through
		case enWarning:
			(this->*FunPtr[enWarning])();
			// fall through
		case enError:
			(this->*FunPtr[enError])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

enTypeLevel getTypeLevel( std::string level)
{
		if ( level == "DEBUG")
			return enDebug;
		else if ( level == "INFO")
			  return enInfo;
		else if ( level == "WARNIG")
			return enWarning;
		else if ( level == "ERROR")
			return enError;
		else
			return enUnknown;
}