/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:26 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/24 15:27:45 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	protected:
		Brain* brain;
	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog &copy);
		virtual ~Dog();
		Dog &operator=(const Dog &copy);
		void makeSound() const;
		Brain* 		getBrain() const;
		void 		setBrain(Brain* brain);
};

#endif