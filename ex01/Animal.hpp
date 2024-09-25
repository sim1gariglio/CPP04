/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:11:03 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/16 10:56:17 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"
# define YELLOW "\033[33m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define RESET "\033[0m"
class Animal
{
	protected:
		std::string type;
		Brain* brain;
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal &operator=(const Animal &copy);
		std::string getType() const;
		void 		setType(std::string type);
		Brain* 		getBrain() const;
		void 		setBrain(Brain* brain);
		virtual void makeSound() const;
};

#endif