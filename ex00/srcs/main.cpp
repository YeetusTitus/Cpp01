/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 13:44:00 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zombie.hpp>

int	main(void)
{
	Zombie	*zomb;

	zomb = newZombie("Rottytop");
	zomb->announce();
	randomChump("Michael Jackson");
	zomb->~Zombie();
	return (0);
}