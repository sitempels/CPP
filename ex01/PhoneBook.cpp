/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <stempels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 08:26:03 by stempels          #+#    #+#             */
/*   Updated: 2025/09/01 09:15:25 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

class	PhoneBook {
	/*__Data member______*/
	private:
		int		last_added;
		Contact	contacts[8];
	//
	/*__Function member__*/
	public:
		void	add();
		void	exit()	{
		}
		Contact search()	{
		}
};

void	add() {
	
};

//Contact.cpp
class	Contact {
	/*___Data member_______*/
	private:
		int				index;
		std::string		f_name;
		std::string		l_name;
		std::string		phone_nbr;
		std::string		secret;
	//
	/*___Function member___*/
};
