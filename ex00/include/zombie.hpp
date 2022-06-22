/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:42:40 by jforner           #+#    #+#             */
/*   Updated: 2022/06/21 19:23:13 by jforner          ###   ########.fr       */
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
    Zombie(std::string str);
    ~Zombie();
	void	announce(void);

};

//newZombie
Zombie* newZombie( std::string name );

//randomChump
void 	randomChump( std::string name );

#endif