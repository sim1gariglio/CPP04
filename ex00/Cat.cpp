/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:32 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/13 09:39:31 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << this->getType() << " was created." << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << this->getType() << " was created." << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << this->getType() << " was created." << std::endl;
}

Cat::~Cat()
{
	std::cout << this->getType() << " was destroyed." << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
