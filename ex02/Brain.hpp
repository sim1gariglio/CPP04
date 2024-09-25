/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:41:21 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/16 10:56:54 by sgarigli         ###   ########.fr       */
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
		virtual ~Brain();
		Brain &operator=(const Brain &copy);
};

#endif