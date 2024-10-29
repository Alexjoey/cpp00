/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:53:12 by amylle            #+#    #+#             */
/*   Updated: 2024/10/29 13:56:39 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenum;
		std::string	secret;

	public:
		Contact(void);
		~Contact(void);
		void add_firstname(void);
		void add_lastname(void);
		void add_nickname(void);
		void add_phonenum(void);
		void add_secret(void);
		std::string get_firstname(void);
		std::string get_lastname(void);
		std::string get_nickname(void);
		std::string get_phonenum(void);
		std::string get_secret(void);
};

#endif
