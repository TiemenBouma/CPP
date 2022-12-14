/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:00:38 by tbouma            #+#    #+#             */
/*   Updated: 2022/12/14 09:05:31 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// int main()
// {
// }
int main()
{
	// const Animal* meta = new Animal();
	// const Animal* dog_ptr = new Dog();
	// const Animal* cat_ptr = new Cat();
	// std::cout << dog_ptr->getType() << " " << std::endl;
	// std::cout << cat_ptr->getType() << " " << std::endl;
	// cat_ptr->makeSound(); //will output the cat sound!
	// dog_ptr->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete dog_ptr;
	// delete cat_ptr;
	const WrongAnimal* meta = new WrongAnimal();
	//const WrongAnimal* dog_ptr = new Dog();
	const WrongAnimal* cat_ptr = new WrongCat();
	//std::cout << dog_ptr->getType() << " " << std::endl;
	std::cout << cat_ptr->getType() << " " << std::endl;
	cat_ptr->makeSound(); //will output the cat sound!
	//dog_ptr->makeSound();
	meta->makeSound();

	delete meta;
	//delete dog_ptr;
	delete cat_ptr;
	return 0;
	//--------------------
	Animal *an = new Animal;
	Dog *d = new Dog;
	Cat *c= new Cat;
	Animal *an_ptr = d;
	//Dog &d_ref = *an;
	Animal &an_ref = *d;
	an->makeSound();
	c->makeSound();
	d->makeSound();
	an_ptr->makeSound();
	an_ref.makeSound();

}