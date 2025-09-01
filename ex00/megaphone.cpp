/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 07:36:46 by stempels          #+#    #+#             */
/*   Updated: 2025/09/01 08:15:48 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISES *" << std::endl;
		return (0);
	}
	for (int i = 1; argv[i]; i++)
		for (int j = 0; argv[i][j]; j++)
			std::cout << (char) toupper(argv[i][j]);
	std::cout << std::endl;
	return (0);
}
