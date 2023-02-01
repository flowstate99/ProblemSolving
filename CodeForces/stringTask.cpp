/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringTask.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:18:54 by acmaghou          #+#    #+#             */
/*   Updated: 2023/01/31 13:39:10 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <regex>
#include <vector>
#include <cstring>

std::string	removeVowels(std::string s) {
	std::regex	r("[aoeiuy]");
	return regex_replace(s, r, "");
}

int	main() {
	std::string	s;
	std::cin >> s;
	
	std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	s = removeVowels(s);
	for (int i = 0; s[i]; i += 2) {
		s.insert(i, ".");
	}
	std::cout << s << std::endl;
}