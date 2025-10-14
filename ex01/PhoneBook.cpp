/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <stempels@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 08:26:03 by stempels          #+#    #+#             */
/*   Updated: 2025/10/14 13:27:57 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add(){
	int			index;
	std::string	str;

	last_added++;
	if (last_added > 7)
		last_added = 0;
	index = last_added;
	if (stored < 8)
		stored++;
	contacts[index].setIndex(index);
	std::cout << "Insert contact name: ";
	str = readcin();
	contacts[index].setName(str); 
	std::cout << "Insert contact last name: ";
	str = readcin();
	contacts[index].setLastName(str);
	std::cout << "Insert contact phone number: ";
	str = readcin();
	contacts[index].setPhoneNbr(str);
	std::cout << "Insert contact secret: "; 
	str = readcin();
	contacts[index].setSecret(str);
	std::cout <<std::endl;
}

void	PhoneBook::search(){
	int	index = -1;

	if (stored == 0){
		std::cout << "No contact found !\n" << std::endl;
		return ;
	}
	std::cout << std::setw(12) << "Index |"
			<< std::setw(13) << "Name |"
			<< std::setw(11) << "Last Name"
			<< std::endl;
	for (int i = 0; i < stored; i++){
		std::cout << std::setw(10) << contacts[i].getIndex() << " | "
				<< std::setw(10) << trunc_str(contacts[i].getName()) << " | "
				<< std::setw(10) << trunc_str(contacts[i].getLastName())
				<< std::endl;
	}
	std::cout << "\nEnter an index: ";
	while (!(std::cin >> index) || (index < 0 || index > (stored - 1))){
		if (std::cin.eof())
			exit(0);
		std::cout << "Invalid index.\nEnter a valid index: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	std::cout << std::endl;
	display(index);
}

std::string	PhoneBook::readcin(){
	std::string	str;

	while (!(std::cin >> str)) {
		if (std::cin.eof()) {
			exit(0);
		}
		std::cout << "Invalid index.\nEnter a valid index: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return (str);
}

void	PhoneBook::display(int index){
	std::cout << contacts[index].getName() + "\n"
	<< contacts[index].getLastName() + "\n"
	<< contacts[index].getPhoneNbr() + "\n"
	<< contacts[index].getSecret() + "\n"
	<< std::endl;
}

std::string	PhoneBook::trunc_str(std::string str){
	if (str.size() > 10)
		return (str.substr(0, 9) + '.');
	return (str);
}
