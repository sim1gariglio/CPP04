/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:30 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/26 11:46:20 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog was created." << std::endl;
	this->brain = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog was created." << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog was created." << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog was destroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		Animal::operator=(copy);
		this->brain = new Brain(*copy.getBrain());
	}
	return (*this);
}



void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}

void Dog::setBrain(Brain* brain)
{
	this->brain = brain;
}