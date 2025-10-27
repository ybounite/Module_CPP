# include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("Default"), _grad(150) {
	
	std::cout << "Breacurat " << getName() << " consterctor has been called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, const short grad ) : _name(name){

	setGrade(grad);
	std::cout << "Breacurat " << getName() << " consterctor has been called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat &Other ) : _name(Other.getName()), _grad(Other.getGrade()){
	
	std::cout << "Breacurat " << getName() << " copy consterctor has been called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=( const Bureaucrat &Other ) {

	if (this != &Other) {
		this->setGrade(Other.getGrade());
	}
	std::cout << "Breacurat " << getName() << " copy assignment has been called" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	
	std::cout << "Breacurat " << getName() << " Destructor has been called" << std::endl;
}

void		Bureaucrat::setGrade( const short grad ) {
	if (grad <= 0)
		throw GradeTooLowException();
	else if (grad > 150)
		throw GradeTooHighException();
	this->_grad = grad;
}

std::string	Bureaucrat::getName( void ) const { return _name; }
short		Bureaucrat::getGrade( void ) const { return _grad; }
void		Bureaucrat::incrementGrade() {

	if (this->getGrade() <= 1)
		throw GradeTooHighException();
	--_grad;
}

void		Bureaucrat::decrementGrade() {

	if (_grad >= 150)
		throw GradeTooLowException();
	++_grad;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "Bureaucrat grade is too low!";
}

std::ostream	&operator<<( std::ostream &COUT, const Bureaucrat &Bur ) {
	COUT << Bur.getName() << ", bureaucrat grade " << Bur.getGrade() << std::endl;
	return COUT;
}
