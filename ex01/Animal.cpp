/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:11:05 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/11 15:36:03 by sgarigli         ###   ########.fr       */
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
{
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

void Animal::makeSound() const
{
	std::cout << "Swoosh" << std::endl;
}
