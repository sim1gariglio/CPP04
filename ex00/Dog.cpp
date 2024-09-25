/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:30 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/24 15:17:28 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << type << " was created." << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << type << " was created." << std::endl;
}

Dog::Dog(const Dog &copy)
{
	*this = copy;
	std::cout << type << " was created." << std::endl;
}

Dog::~Dog()
{
	std::cout << type << " was destroyed." << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	Animal::operator=(copy);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}