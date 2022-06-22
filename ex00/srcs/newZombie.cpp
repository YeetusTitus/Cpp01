/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newzombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:33:59 by jforner           #+#    #+#             */
/*   Updated: 2022/06/21 19:23:36 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zombie.hpp>

Zombie	*newZombie(std::string name)
{
	Zombie	*zomb = new Zombie(name);
	return (zomb);
}
