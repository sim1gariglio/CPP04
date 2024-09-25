/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:41:24 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/24 15:21:59 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
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

void	Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index >= 100)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	if (idea.empty())
	{
		std::cout << "Invalid idea" << std::endl;
		return ;
	}
	if (!_ideas[index].empty())
		std::cout << "Idea at index " << index << " overwritten" << std::endl;
	_ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cout << "Invalid index" << std::endl;
		return "";
	}
	if (_ideas[index].empty())
	{
		std::cout << "No idea at index " << index << std::endl;
		return "";
	}
	return _ideas[index];
}

void	Brain::printIdea(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	if (_ideas[index].empty())
	{
		std::cout << "No idea at index " << index << std::endl;
		return ;
	}
	std::cout << "Idea at index " << index << ": " << _ideas[index] << std::endl;
}

void	Brain::printAllIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		if (!_ideas[i].empty())
			std::cout << "Idea at index " << i << ": " << _ideas[i] << std::endl;
	}
}
