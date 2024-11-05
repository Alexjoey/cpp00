/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:50:51 by amylle            #+#    #+#             */
/*   Updated: 2024/10/29 12:56:04 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else for(int i = 1; argv[i]; i++)
		for(int j = 0; argv[i][j]; j++)
			std::cout << (char)toupper(argv[i][j]);
	std::cout << "\n";
}
