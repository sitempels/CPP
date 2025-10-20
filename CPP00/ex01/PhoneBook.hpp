/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <stempels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:37:39 by stempels          #+#    #+#             */
/*   Updated: 2025/10/20 16:08:13 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <limits>
#include <stdlib.h>
#include "Contact.hpp"

class	PhoneBook {
	/*__Constructor______*/
	public:
		PhoneBook():last_added(-1), stored(0){
		}
	/*__Data member______*/
	private:
		int		last_added;
		int		stored;
		Contact	contacts[8];
	/*__Function member__*/
	public:
		void		add();
		void		search();
		void		display(int index);
		std::string	trunc_str(std::string str);
		std::string	readcin();
	/*__Destructor_______*/
	public:
		~PhoneBook(){
		}
};
#endif
