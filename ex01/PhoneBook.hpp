/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <stempels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:37:39 by stempels          #+#    #+#             */
/*   Updated: 2025/10/14 13:26:37 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
class	PhoneBook {
	/*__Data member______*/
	private:
		int		last_added = -1;
		int		stored = 0;
		Contact	contacts[8];

	/*__Function member__*/
	public:
		void		add();
		void		search();
		void		display(int index);
		std::string	trunc_str(std::string str);
		std::string	readcin();
};
#endif
