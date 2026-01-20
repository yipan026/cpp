


#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include "AForm.hpp"

class ShrubberyCreationForm
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();

		//member funcs
		void	localExec() const;
};

#endif