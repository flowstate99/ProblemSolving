/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Candies.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:18:20 by acmaghou          #+#    #+#             */
/*   Updated: 2023/01/30 18:22:22 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	int	n;
	std::cin >> n;
	int	c[n];
	for (int i = 0; i < n; i++) {
		std::cin >> c[i];
	}
	int	A[2];
	std::cin >> A[0] >> A[1];
	int res = 0;
	for (int i = A[0]; i <= A[1]; i++) {
		res += c[i];
	}
	std::cout << res;
}