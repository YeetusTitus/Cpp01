/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:15:39 by jforner           #+#    #+#             */
/*   Updated: 2022/06/23 11:05:45 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Change_H
# define Change_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>

class Harl {

private :
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
    Harl();
    ~Harl();

	void    	complain(std::string level);

};

#endif