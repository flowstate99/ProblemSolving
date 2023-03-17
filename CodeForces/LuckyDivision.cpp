/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LuckyDivision.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraf <achraf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 23:44:49 by achraf            #+#    #+#             */
/*   Updated: 2023/02/02 00:09:40 by achraf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <algorithm>

int	check_lucky(int n) {
	std::stringstream	ss;
	ss << n;
	std::string	num;
	ss >> num;
	if (num.find('4') || num.find('7')) {
		if (!num.find('0') || !num.find('1') || !num.find('2') ||
			!num.find('3') || !num.find('5') || !num.find('6') ||
			!num.find('8') || !num.find('9'))
			return 1;
		else
			return 0;
	}
	else
		return 0;
}

int	main() {
	int	n;

	std::cin >> n;
	if (check_lucky(n)) {
		std::cout << "YES";
		return 0;
	}
	for(int i = 1; i < n/2; i++) {
		if (check_lucky(i)) {
			if (n % i == 0) {
				std::cout << "YES";
				return 0;
			}
		}
	}
	std::cout<< "NO";
}