/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:16:48 by amylle            #+#    #+#             */
/*   Updated: 2024/10/29 13:55:58 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{

public:
	Phonebook(void);
	~Phonebook(void);
	void	add(void);
	void	search(void);

private:
	Contact _contacts[8];
	int		_index;

};

#endif
