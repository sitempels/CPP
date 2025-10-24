/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   customReplace.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stempels <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 08:02:01 by stempels          #+#    #+#             */
/*   Updated: 2025/10/24 13:06:59 by stempels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUSTOMREPLACE_HPP
# define CUSTOMREPLACE_HPP

#include <string>
#include <iostream>
#include <fstream>

void	customReplace(std::ifstream &file1, std::ofstream &file2, std::string target, std::string replace);

#endif
