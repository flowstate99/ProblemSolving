/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Football.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:30:03 by acmaghou          #+#    #+#             */
/*   Updated: 2023/01/31 12:42:07 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	char	str[100];
	std::cin >> str;

	int	n = 1;
	for (int i = 0; str[i] && str[i + 1]; i++) {
		if (str[i + 1] == str[i]) {
			n++;
			if (n == 7) {
				std::cout << "YES";
				return (0);
			}
		}
		else
			n = 1;
	}
	std::cout << "NO";
}