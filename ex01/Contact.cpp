/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:56:10 by amylle            #+#    #+#             */
/*   Updated: 2024/10/29 14:00:55 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){}

Contact::~Contact(void){}

void	Contact::add_firstname(void)
{
	std::string str;

	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, str);
		if (str != "")
			this->firstname = str;
	}
}

void	Contact::add_lastname(void)
{	
	std::string str;

	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, str);
		if (str != "")
			this->lastname = str;
	}
}

void	Contact::add_nickname(void)
{
	std::string str;

	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, str);
		if (str != "")
			this->nickname = str;
	}
	this->nickname = str;
}

void	Contact::add_phonenum(void)
{
	std::string str;

	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter phonenum: ";
		std::getline(std::cin, str);
		if (str != "")
			this->phonenum = str;
	}
	this->phonenum = str;
}

void	Contact::add_secret(void)
{
	std::string str;

	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, str);
		if (str != "")
			this->secret = str;
	}
}

std::string	Contact::get_firstname(void)
{
	return (this->firstname);
}

std::string	Contact::get_lastname(void)
{
	return (this->lastname);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string	Contact::get_phonenum(void)
{
	return (this->phonenum);
}

std::string	Contact::get_secret(void)
{
	return (this->secret);
}
