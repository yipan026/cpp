/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:05:18 by yipan             #+#    #+#             */
/*   Updated: 2026/01/05 13:16:35 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	AAnimal	*animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	
	for (int i = 0; i < 10; i++)
		delete (animals[i]);
	return (0);

	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// delete (meta);
	// delete (i);
	// delete (j);

	// const WrongAnimal* meta1 = new WrongAnimal();
	// const WrongAnimal* i1 = new WrongCat();
	// std::cout << i1->getType() << " " << std::endl;
	// i1->makeSound(); //will output the cat sound!
	// meta1->makeSound();
	// delete (meta1);
	// delete (i1);
	// return (0);
}
