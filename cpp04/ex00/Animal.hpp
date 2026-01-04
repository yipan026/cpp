
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	private:
		std::string	_type;
	public:
		Animal();
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		~Animal();
		//member funcs
		void	makeSound();
};

#endif