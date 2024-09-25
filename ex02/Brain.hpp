/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:41:21 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/24 15:22:52 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# define YELLOW "\033[33m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define RESET "\033[0m"
# include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
		
	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();
		Brain &operator=(const Brain &copy);

		void	setIdea(int index, std::string idea);
		std::string	getIdea(int index) const;

		void 		printIdea(int index) const;
		void 		printAllIdeas() const;
};

#endif