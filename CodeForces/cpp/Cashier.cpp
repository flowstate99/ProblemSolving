/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cashier.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:52:35 by acmaghou          #+#    #+#             */
/*   Updated: 2023/01/31 14:18:54 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	int	n, L, a, t, l, rest, start;
	std::cin >> n >> L >> a;
	start = 0;
	rest = 0;
	while (n) {
		std::cin >> t >> l;
		rest += (t - start) /a;
		start = t + l;
		n--;
	}
	rest += (L - start) /a;
	std::cout << rest;
}