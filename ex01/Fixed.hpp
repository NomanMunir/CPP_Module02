/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:38:49 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/14 17:51:14 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int _value;
		static const int _sBit = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		Fixed(const Fixed& other);
		Fixed & operator=(Fixed const & rhs );
		int toInt( void ) const;
		float toFloat( void ) const;
};

std::ostream &  operator << (std::ostream & o, Fixed const & rhs);