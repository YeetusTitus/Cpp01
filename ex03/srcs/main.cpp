/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/07/06 15:06:09 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>
#include <HumanB.hpp>

int main() 
{
	{
		Weapon  club = Weapon("slash");
		HumanA bob("Morsay", club);
		bob.attack();
		club.setType("gros flingue sa mère");
		bob.attack();
	}
	{
		Weapon  club = Weapon("médaillon");
		HumanB jim("Roi Heenok");
		jim.setWeapon(club);
		jim.attack();
		club.setType("mitraillete à pompe");
		jim.attack();
	}
	// system("leaks war");
	return 0; 
}