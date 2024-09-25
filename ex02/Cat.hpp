/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:28 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/24 15:27:54 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	protected:
		Brain* brain;
    public:
        Cat();
		Cat(std::string type);
        Cat(const Cat &copy);
        virtual ~Cat();
        Cat &operator=(const Cat &copy);
        void makeSound() const;
		Brain* 		getBrain() const;
		void 		setBrain(Brain* brain);
};

#endif