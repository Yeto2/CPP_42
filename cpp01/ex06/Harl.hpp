/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yessemna <yessemna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:23:23 by yessemna          #+#    #+#             */
/*   Updated: 2024/11/24 22:21:53 by yessemna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Harl
{
    private:
			void debug( void );
            void info( void );
            void warning( void );
            void error( void );
    public:
            void complain(std::string level);
};