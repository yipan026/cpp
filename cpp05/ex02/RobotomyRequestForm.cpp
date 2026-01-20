


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(),
	_target("") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm("RobotomyRequestForm", false, 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other), _target(other._target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != *other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Default Destructor" << std::endl;
}

void	RobotomyRequestForm::localExec() const
{
	std::cout << "zzzz* Some Drilling Noise *zzzz" << std::endl;
	//how to use the random funcs here?
	int	x = rand() % 2;
	if (!x)
	{
		std::cout << _target << " has been Robotomized successfully"
			<< std::endl;
	}
	else
	{
		std::cout << _target << " has failed to Robotomize" << std::endl;
	}
}
