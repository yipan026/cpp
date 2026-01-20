


#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern
{
	private:
	public:
		Intern();
		Intern(const std::string& name, const std::string& target);
		Intern(const Intern& other);
		Intern&	operator=(const Intern& other);
		~Intern();

		//member funcs
		AForm*	makeForm(const std::string& name, const std::string& target) const;
		AForm*	createPresidentialForm(const std::string& target);
		AForm*	createRobotomyForm(const std::string& target);
		AForm*	createShrubberyForm(const std::string& target);
}

#endif