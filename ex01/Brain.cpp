/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:41:24 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/11 15:46:14 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain was created." << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Brain was created." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain was destroyed." << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}

std::string Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}


