/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneNumbers.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:49:12 by acmaghou          #+#    #+#             */
/*   Updated: 2023/01/31 18:39:26 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int	main() {
	int	n;
	std::cin >> n;
	std::string	s;
	std::cin >> s;
	int res = 0;
	if (n >= 11) {
		for (int i = 0; i < s.length() && res < n / 11; i++) {
			if (s[i] == '8')
				res++;
		}
	}
	std::cout << res;
}