/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:11:08 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/26 11:46:51 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const int numAnimals = 10;
    // Animal* animals[numAnimals];

    // for (int i = 0; i < numAnimals / 2; ++i) {
    //     animals[i] = new Dog();
    // }
    // for (int i = numAnimals / 2; i < numAnimals; ++i) {
    //     animals[i] = new Cat();
    // }
    // for (int i = 0; i < numAnimals; ++i) {
    //     delete animals[i];
    // }

	Dog ciao;
	{
		Dog ciao2 = ciao;
	}
	
	const Animal *j = new Dog();
	// const Animal we;
	delete j;
    return 0;
}