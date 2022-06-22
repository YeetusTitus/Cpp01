/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:34:04 by jforner           #+#    #+#             */
/*   Updated: 2022/06/21 19:26:20 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zombie.hpp>

void	randomChump(std::string name)
{
	Zombie	zomb(name);

	zomb.announce();
}
