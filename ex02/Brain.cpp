/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:41:24 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/16 10:58:38 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = i;
	std::cout << GREEN << "Brain was created." << RESET <<std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << GREEN << "Brain was created." << RESET <<std::endl;
}

Brain::~Brain()
{
	std::cout << RED << "Brain was destroyed." << RESET <<std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}


