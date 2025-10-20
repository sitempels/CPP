/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <stempels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:40:12 by stempels          #+#    #+#             */
/*   Updated: 2025/10/20 16:03:40 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact {
	/*__Constructor______*/
	public:
		Contact(){
		}
	/*___Data member_______*/
	private:
		int				index;
		std::string		f_name;
		std::string		l_name;
		std::string		n_name;
		std::string		phone_nbr;
		std::string		secret;
	//
	/*___Function member___*/
	public:
	/*__Setters_*/
		void		setIndex(int nbr);
		void		setName(std::string str);
		void		setLastName(std::string str);
		void		setNickname(std::string str);
		void		setPhoneNbr(std::string str);
		void		setSecret(std::string str);
	/*__Getters_*/
		int			getIndex() const;
		std::string	getName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getPhoneNbr() const;
		std::string	getSecret() const;
	/*__Destructor_______*/
	public:
		~Contact(){
		}
};
#endif
