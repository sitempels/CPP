/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:23:10 by stempels          #+#    #+#             */
/*   Updated: 2025/11/07 12:11:48 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

/*Includes*/
# include <iostream>
# include <string>

class	Brain {
	public:
		/*Constructor-Copy Constructor-Destructor*/
		Brain();
		Brain(const Brain& source);
		~Brain();

		/*Overloaded Operators*/
		Brain&	operator=(const Brain& source);

		/*Setter-Getter*/
		std::string	getIdeas(int pos_idea) const ;
		void		setIdeas(int pos_idea, std::string idea);

	private:
		/*Private Attributes*/
		std::string	ideas[100];
};

#endif
