#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class	RobotomyRequestForm : public AForm
{
	private :
		std::string	_target;
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string _target);
		RobotomyRequestForm(const RobotomyRequestForm &obj);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();
		std::string	getTarget() const;
		bool		execute(Bureaucrat const &executor) const;
};

#endif