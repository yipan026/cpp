

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: _target(""), AForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : _target(target),
	AForm("PresidentialPardonForm", false, 25, 5)
{
	std:cout << "PresidentialPardonForm Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
	: AForm(other), _target(other._target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != *other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Default Destructor" << std::endl;
}

void	PresidentialPardonForm::localExec() const
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox."
		<< std::endl;
}
