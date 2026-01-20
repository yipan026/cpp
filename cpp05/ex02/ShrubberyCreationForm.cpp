


#include "ShrubberyCreationForm"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm(), _target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", false, 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Default Constructor" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other), _target(other._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != *other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default Destructor" << std::endl;
}

/*
Creates a file <target>_shrubbery in the working directory and writes ASCII trees
inside it.
*/
void	ShrubberyCreationForm::localExec() const
{
	std::string	filename = _target + "_shrubbery";
	//open the file
	std::ofstream	file(filename.c_str());
	if (file.is_open())//draw the tree here
	{
		file <<
		"       oxoxoo    ooxoo\n"
        "    ooxoxo oo  oxoxooo\n"
        "   oooo xxoxoo ooo ooox\n"
        "   oxo o oxoxo  xoxxoxo\n"
        "   oxo xooxoooo o ooo\n"
        "       ooo\\oo\\  /o/o\n"
        "           \\  \\/ /\n"
        "            |   /\n"
        "            |  |\n"
        "            |  |\n"
        "            |  |\n"
        "            |  |\n"
		<< std::endl;
		file.close();
	}
	else
		std::cerr << filename << " open failed" << std::endl;
}
