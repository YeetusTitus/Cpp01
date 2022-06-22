/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:42:40 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 17:19:21 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include <string>
# include <iostream>
# include <cstring>
# include "Weapon.hpp"

class HumanA {

private :
	std::string	name;
    Weapon		&weapon;

public:
    HumanA(std::string str, Weapon &w);
    ~HumanA();

	void	attack(void);
};

#endif