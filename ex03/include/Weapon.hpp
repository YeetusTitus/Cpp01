/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:42:40 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 15:11:48 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <string>
# include <iostream>
# include <cstring>

class Weapon {

private :
	std::string	type;

public:
    Weapon(std::string str);
    ~Weapon();

    void		setType(std::string str);
    std::string	getType(void);
};

#endif