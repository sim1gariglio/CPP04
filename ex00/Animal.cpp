/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:11:05 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/13 11:20:39 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << this->type << " was created." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << this->type << " was created." << std::endl;
}

Animal::Animal(const Animal &copy)
{ex00/Animal.cpp ex00/Animal.hpp ex00/Cat.cpp ex00/Cat.hpp ex00/Dog.cpp ex00/Dog.hpp ex00/main.cpp ex00/Makefile ex00/WrongAnimal.cpp ex00/WrongAnimal.hpp ex00/WrongCat.cpp ex00/WrongCat.hpp
	*this = copy;
	std::cout << this->type << " was created." << std::endl;
}

Animal::~Animal()
{
	std::cout << this->type << " was destroyed." << std::endl;
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

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound() const
{
	std::cout << "Swoosh" << std::endl;
}
