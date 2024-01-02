#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private :
		std::string	_target;
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();
		std::string	getTarget() const;
		void		setTarget(std::string target);
		bool		execute(Bureaucrat const &executor) const;
		AForm		*makeNew();
};

#endif
