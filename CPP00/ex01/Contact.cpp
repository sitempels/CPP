#include "Contact.hpp"

void	Contact::setIndex(int nbr){
	index = nbr;
}

void	Contact::setName(std::string str){
	f_name = str;
}

void	Contact::setLastName(std::string str){
	l_name = str;
}

void	Contact::setNickname(std::string str){
	n_name = str;
}

void	Contact::setPhoneNbr(std::string str){
	phone_nbr = str;
}

void	Contact::setSecret(std::string str){
	secret = str;
}

int	Contact::getIndex() const{
	return (index);
}

std::string	Contact::getName() const{
	return (f_name);
}

std::string	Contact::getLastName() const{
	return (l_name);
}

std::string	Contact::getNickname() const{
	return (n_name);
}

std::string	Contact::getPhoneNbr() const{
	return (phone_nbr);
}

std::string	Contact::getSecret() const{
	return (secret);
}
