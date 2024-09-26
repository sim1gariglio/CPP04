/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:32 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/26 11:45:26 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat was created." << std::endl;
	this->brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat was created." << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat was created." << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat was destroyed." << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		Animal::operator=(copy);
		this->brain = new Brain(*copy.getBrain());
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}

void Cat::setBrain(Brain* brain)
{
	this->brain = brain;
}
