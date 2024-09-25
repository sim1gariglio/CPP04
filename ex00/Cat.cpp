/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:32 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/24 15:17:43 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << type << " was created." << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << type << " was created." << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << type << " was created." << std::endl;
}

Cat::~Cat()
{
	std::cout << type << " was destroyed." << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	Animal::operator=(copy);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
