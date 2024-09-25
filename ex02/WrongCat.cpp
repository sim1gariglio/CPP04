/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:02:04 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/13 10:09:55 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << this->getType() << " was created." << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << this->getType() << " was created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
	std::cout << this->getType() << " was created." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->getType() << " was destroyed." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meow" << std::endl;
}