/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:41:37 by amylle            #+#    #+#             */
/*   Updated: 2024/10/29 13:46:53 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <string>

Phonebook::Phonebook(void)
{
}

Phonebook::~Phonebook(void)
{
}

void	Phonebook::add(void)
{
	this->_contacts[this->_index].add_firstname();
	this->_contacts[this->_index].add_lastname();
	this->_contacts[this->_index].add_nickname();
	this->_contacts[this->_index].add_phonenum();
	this->_contacts[this->_index].add_secret();
	this->_index = (this->_index + 1) % 8;
}

static std::string	add_spaces(int	i)
{
	std::string	str;

	while (i--)
		str.append(" ");
	return (str);
}

static std::string	max_width(std::string str, unsigned long width)
{
	if (str.size() > width)
	{
		str.resize(width);
		str[width - 1] = '.';
	}
	return (str);
}

int	print_contacts(Contact contacts[8])
{
	int			i;
	std::string	str;

	if (!contacts[0].get_firstname().size())
	{
		std::cout << "Phonebook is empty" << std::endl;
		return (false);
	}
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	i = -1;
	while (++i < 8 && contacts[i].get_firstname().size())
	{
		std::cout << "|" << add_spaces(9) << i + 1;
		str = max_width(contacts[i].get_firstname(), 10);
		std::cout << "|" << add_spaces(10 - str.size()) << str;
		str = max_width(contacts[i].get_lastname(), 10);
		std::cout << "|" << add_spaces(10 - str.size()) << str;
		str = max_width(contacts[i].get_nickname(), 10);
		std::cout << "|" << add_spaces(10 - str.size()) << str;
		std::cout << "|" << std::endl;
	}
	std::cout << " ___________________________________________ " << std::endl;
	return (true);
}

void	print_specific_contact(Contact contact)
{
	std::cout << "First name: " << contact.get_firstname() << std::endl;
	std::cout << "Last name: " << contact.get_lastname() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phonenumber: " << contact.get_phonenum() << std::endl;
	std::cout << "Darkest secret: " << contact.get_secret() << std::endl;
}

void	Phonebook::search()
{
	std::string	str;

	if (!print_contacts(this->_contacts))
		return ;
	str = "";
	while (!std::cin.eof())
	{
		std::cout << "Select an index: ";
		std::getline(std::cin, str);
		if (str != "" && str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
	  		this->_contacts[str[0] - 1 - '0'].get_firstname().size())
		{
			print_specific_contact(this->_contacts[str[0] - 1 - '0']);
			break ;
		}
		else if (!std::cin.eof())
			std::cout << "Invalid index" << std::endl;
	}
}
