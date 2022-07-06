/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/06 18:12:31 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zombie.hpp>

int	main(void)
{
	Zombie	*zomb;
	Zombie	*zomboss;
	int		nbr;
	int		n;

	n = 2;
	nbr = 0;
	zomb = zombieHorde(n ,"Bucket zombie");
	for (int i = 0; i < n; i++)
		zomb[i].announce();
	zomboss = zombieHorde(nbr ,"Crazy Dave");
	for (int i = 0; i < nbr; i++)
		zomboss[i].announce();
	delete [] zomb;
	delete [] zomboss;
	// system("leaks horde");
	return (0);
}
