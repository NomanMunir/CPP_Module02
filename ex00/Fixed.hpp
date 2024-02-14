/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:38:49 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/14 16:45:39 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int _value;
		static const int _sBit = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& other);
		Fixed & operator=(Fixed const & rhs );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
