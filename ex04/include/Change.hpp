/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:15:39 by jforner           #+#    #+#             */
/*   Updated: 2022/06/22 21:34:31 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Change_H
# define Change_H
# include <string>
# include <iostream>
# include <cstring>
# include <fstream>

class Change {

private :
	std::string		tochange;
	std::string		changer;
	std::string		text;

public:
    Change(std::ifstream *afile, char *s1, char *s2);
    ~Change();

	void		replacement(int index);

	std::string	getText(void);
	std::string	getTochange(void);
	std::string	getChanger(void);
};

//error
int	error(int argc, char *argv[]);

//finder
int the_finder(std::string str, std::string find);

#endif