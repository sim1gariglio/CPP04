/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:04:11 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/13 10:05:10 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << this->type << " was created." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << this->type << " was created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << this->type << " was created." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << this->type << " was destroyed." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Swoosh" << std::endl;
}
