/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:11:05 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/16 11:11:54 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal was created." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal was created." << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Animal was created." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal was destroyed." << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

Brain* Animal::getBrain() const
{
	return (this->brain);
}

void Animal::setBrain(Brain* brain)
{
	this->brain = brain;
}

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound() const
{
	std::cout << "Swoosh" << std::endl;
}
