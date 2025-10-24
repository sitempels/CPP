/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:09:48 by stempels          #+#    #+#             */
/*   Updated: 2025/10/24 16:48:40 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	public:
		Harl();
		~Harl();

		void	complain(std::string level);

	private:
		void	(Harl::*complain_level)(void);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
