/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReverseArray.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:53:51 by acmaghou          #+#    #+#             */
/*   Updated: 2023/01/30 18:14:32 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

int	main() {
	int	n;
	std::cin >> n;
	
	int	a[n];
	for (int i = 0; i < n; i++) {
		std::cin >> a[i];
	}
	std::vector<int>	v(a, a + n);
	std::reverse(v.begin(), v.end());
	for (std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << *it << " ";
	}
}