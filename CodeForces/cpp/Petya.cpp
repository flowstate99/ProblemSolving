/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Petya.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:23:36 by acmaghou          #+#    #+#             */
/*   Updated: 2023/01/31 12:24:53 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <string.h>

int	main() {
	std::string	str1;
	std::string	str2;

	std::cin >> str1;
	std::cin >> str2;
	std::transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
	std::transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
	if (strcmp(str1.c_str(), str2.c_str()) > 0)
		std::cout << "1";
	else if (strcmp(str1.c_str(), str2.c_str()) < 0)
		std::cout << "-1";
	else
		std::cout << "0"; 
	return 0;
}