/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:33:59 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 13:33:30 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zombie.hpp>

Zombie*	zombieHorde( int N, std::string name )
{
	if (N < 1)
	{
		std::cout << "The number of zombie is not correct" << std::endl;
		return (NULL);
	}
	Zombie	*zomb = new Zombie[N];
	for(int i = 0; i < N; i++)
		zomb[i].set_name(name);
	return (zomb);
}
