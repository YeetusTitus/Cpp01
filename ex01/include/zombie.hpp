/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:42:40 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 13:22:31 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>
# include <cstring>

class Zombie {

private :
	std::string	name;

public:
    Zombie();
    ~Zombie();
	void	announce(void);

    void set_name(std::string str);

};

//zombieHorde
Zombie*	zombieHorde( int N, std::string name );

#endif