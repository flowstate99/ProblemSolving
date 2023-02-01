/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NearlyLuckyNumber.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 17:14:13 by acmaghou          #+#    #+#             */
/*   Updated: 2023/02/01 19:11:41 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <iostream>

int	main() {
	int	n;
	std::cin >> n;
	std::stringstream	ss;
	ss << n;
	std::string	s;
	ss >> s;
	std::string::difference_type	count_4 = std::count(s.begin(), s.end(), '4');
	std::string::difference_type	count_7 = std::count(s.begin(), s.end(), '7');
	std::cout << count_4 + count_7 << std::endl;
	if (count_4 + count_7 >= 4 || count_4 + count_7 <= 7)
		std::cout << "YES";
	else
		std::cout << "NO";

}