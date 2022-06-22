/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:24:28 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 17:03:09 by jforner          ###   ########.fr       */
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
	return 0; 
}