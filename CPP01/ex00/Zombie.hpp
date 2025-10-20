/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <stempels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 08:09:02 by stempels          #+#    #+#             */
/*   Updated: 2025/10/20 11:02:34 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Zombie {
	/*___Constructor_____*/
	public :
		Zombie(){};
	/*___Data members____*/
	private:
		std::string name;
	/*___Function member_*/
	void	annonce(void);
	Zombie	newZombie(std::string name);
	void	randomChump(std::string name);
	/*___Destructor______*/
	public:
		~Zombie(){};
}
