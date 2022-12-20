/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbouma <tbouma@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 10:00:38 by tbouma        #+#    #+#                 */
<<<<<<< HEAD
/*   Updated: 2022/12/14 15:27:00 by tbouma        ########   odam.nl         */
=======
/*   Updated: 2022/12/15 13:32:42 by tiemen        ########   odam.nl         */
>>>>>>> 985b3c431e3c167adda7af902ac97a365c91b74e
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

<<<<<<< HEAD
void leaks()
{
	system("leaks ex01 | grep \"leaks for \"");
}

int main()
{
	atexit(leaks);
	
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;
	// return 0;
=======
// void leaks()
// {
// 	system("leaks ex01");
// }

int main()
{
	//atexit(leaks);
>>>>>>> 985b3c431e3c167adda7af902ac97a365c91b74e
	Dog dog;
 	std::cout << std::endl;
 	Dog	dog2(dog);
	std::cout << std::endl;
	Dog	dog3;
	std::cout << std::endl;
	dog3 = dog2;
	std::cout << std::endl;
	Dog dog4 = dog3;
	Dog dog5 = Dog();

	
	std::cout << std::endl;
	
	// dog.get_brain()->print_idea(0);
	// dog2.get_brain()->print_idea(0);
	// dog3.get_brain()->print_idea(0);
	// dog4.get_brain()->print_idea(0);
	// dog.get_brain()->print_idea(1);
	// dog2.get_brain()->print_idea(1);
	// dog3.get_brain()->print_idea(1);
	// dog4.get_brain()->print_idea(1);

	// Cat cat;
 	// std::cout << std::endl;
 	// Cat	cat2(cat);
	// std::cout << std::endl;
	// Cat	cat3;
	// std::cout << std::endl;
	// cat3 = cat2;
	// std::cout << std::endl;
	// Cat cat4 = cat3;
	
	// cat.get_brain()->print_idea(0);
	// cat2.get_brain()->print_idea(0);
	// cat3.get_brain()->print_idea(0);
	// cat4.get_brain()->print_idea(0);
	// cat.get_brain()->print_idea(1);
	// cat2.get_brain()->print_idea(1);
	// cat3.get_brain()->print_idea(1);
	// cat4.get_brain()->print_idea(1);
}
