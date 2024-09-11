/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:13:28 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/11 15:43:44 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    public:
        Cat();
		Cat(std::string type);
        Cat(const Cat &copy);
        virtual ~Cat();
        Cat &operator=(const Cat &copy);
        void makeSound() const;
	private:
		Brain *_brain;
};

#endif