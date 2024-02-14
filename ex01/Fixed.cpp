/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmunir <nmunir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:38:44 by nmunir            #+#    #+#             */
/*   Updated: 2024/02/14 18:05:04 by nmunir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called " << _value << std::endl;
	this->_value = static_cast<int>(roundf(n * (1 << _sBit)));	
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = static_cast<int>(roundf(n * (1 << _sBit)));
}

int Fixed::toInt( void ) const
{
	return (roundf(this->toFloat()));
}

float Fixed::toFloat( void ) const
{
	return (this->_value / static_cast<float>(1 << _sBit));
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
Fixed & Fixed::operator=(Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs._value;
	return (*this);
}

std::ostream &  operator << (std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
