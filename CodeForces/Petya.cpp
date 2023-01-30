/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Petya.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:23:36 by acmaghou          #+#    #+#             */
/*   Updated: 2023/01/30 18:47:36 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <algorithm>

int	main() {
	std::string	str1;
	std::string	str2;

	std::cin >> str1;
	std::cin >> str2;
	std::cout << "str1.compare(str2) == " << str1.compare(str2) << std::endl;
	std::cout << "str2.compare(str1) == " << str1.compare(str1) << std::endl;

	if(str1.compare(str2) == 0 || str1.compare(str2) == -32 || str1.compare(str2) == 32)
		std::cout << "0";
	else if (str1.compare(str2) < 0 && (str1.compare(str2) == -32 || str1.compare(str2) == 32))
		std::cout << "1";
}