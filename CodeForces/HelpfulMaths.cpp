/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HelpfulMaths.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:46:39 by acmaghou          #+#    #+#             */
/*   Updated: 2023/01/31 13:11:03 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include <vector>
#include <algorithm>

int	main() {
	std::string	s;
	std::cin >> s;

	std::sort(s.begin(), s.end());
	for (int	i = s.length()/2; i < s.length(); i++) {
		std::cout << s[i];
		if (i != s.length() -1)
			std::cout <<  "+";
	}
}