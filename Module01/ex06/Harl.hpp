#pragma once

# ifndef __HARL_H__
# define __HARL_H__

# include <iostream>
# include <string>


// ************************************************************************** //
//                               Harl Class                                   //
// ************************************************************************** //

class Harl {


public:

	Harl( void );
	~Harl( void );

	void		complain( std::string level );

private:

	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );

};

enum enTypeLevel{
	enDebug,
	enInfo,
	enWarning,
	enError,
	enUnknown
};

enTypeLevel getTypeLevel( std::string );

#endif
