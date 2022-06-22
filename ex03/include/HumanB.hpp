/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:42:40 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 16:52:59 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
# include <string>
# include <iostream>
# include <cstring>
# include "Weapon.hpp"

class HumanB {

private :
	std::string	name;
    Weapon      *weapon;
    int         haveWeapon;

public:
    HumanB(std::string str);
    ~HumanB();

	void	attack(void);
    void    setWeapon(Weapon &w);
};

#endif