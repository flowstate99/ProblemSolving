/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LostRectangle.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:18:38 by acmaghou          #+#    #+#             */
/*   Updated: 2023/02/01 17:30:13 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>


int	main() {
	long long int	A1;
	std::cin >> A1;
	int	x = sqrt(A1);
	while (A1 % x)
		x--;
	std::cout << 2 * (x + A1/x);
}