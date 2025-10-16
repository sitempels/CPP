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
int	Contact::setPhoneNbr(std::string str){
	std::regex reg_nbr("^((\\+[0-9]{2})|([0-9]{2}))[/|\\.]*[0-9]{3}[\\.]*[0-9]{2}[\\.]*[0-9]{2}");
	if (std::regex_match(str, reg_nbr)){
		phone_nbr = str;
		return (1);
	}
	std::cout << "Invalid phone number." << std::endl;
	return (0);
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

std::string	Contact::getPhoneNbr() const{
	return (phone_nbr);
}

std::string	Contact::getSecret() const{
	return (secret);
}
