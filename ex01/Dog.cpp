/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:30 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/11 15:37:42 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << this->getType() << " was created." << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << this->getType() << " was created." << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
	std::cout << this->getType() << " was created." << std::endl;
}

Dog::~Dog()
{
	std::cout << this->getType() << " was destroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}