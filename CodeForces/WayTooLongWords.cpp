/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WayTooLongWords.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:04:57 by acmaghou          #+#    #+#             */
/*   Updated: 2023/01/27 18:18:38 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	int	n;
	std::string	s;
	std::cin >> n;
	while (n) {
		std::cin >> s;
		if (s.size() > 10)
			std::cout << s.front() << s.size() - 2 << s.back() << std::endl;
		else
			std::cout << s << std::endl;
		n--;
	}
}