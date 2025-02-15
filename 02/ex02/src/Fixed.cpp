#include <Fixed.hpp>

Fixed::Fixed(void)
{
	this->fixedPoint = 0;
}

Fixed::Fixed(Fixed &fixp)
{
	*this = fixp;
}

Fixed::Fixed(const Fixed &fixp)
{
	*this = fixp;
}

Fixed::Fixed(const int num)
{
	this->fixedPoint = (num << this->bits);
}

Fixed::Fixed(const float num)
{
	this->fixedPoint = roundf(num * (1 << this->bits));
}

Fixed	&Fixed::operator=(const Fixed &fixp)
{
	this->fixedPoint = fixp.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &fixp)
{
	return (this->toFloat() + fixp.toFloat());
}

Fixed	Fixed::operator-(const Fixed &fixp)
{
	return (this->toFloat() - fixp.toFloat());
}

Fixed	Fixed::operator*(const Fixed &fixp)
{
	return (this->toFloat() * fixp.toFloat());
}

Fixed	Fixed::operator/(const Fixed &fixp)
{
	return (this->toFloat() / fixp.toFloat());
}

bool	Fixed::operator>(const Fixed &fixp) const
{
	return (this->toFloat() > fixp.toFloat());
}

bool	Fixed::operator<(const Fixed &fixp) const
{
	return (this->toFloat() < fixp.toFloat());
}

bool	Fixed::operator>=(const Fixed &fixp) const
{
	return (this->toFloat() >= fixp.toFloat());
}

bool	Fixed::operator<=(const Fixed &fixp) const
{
	return (this->toFloat() <= fixp.toFloat());
}

bool	Fixed::operator==(const Fixed &fixp) const
{
	return (this->toFloat() == fixp.toFloat());
}

bool	Fixed::operator!=(const Fixed &fixp) const
{
	return (this->toFloat() != fixp.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->fixedPoint--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	--*this;
	return (tmp);
}

Fixed::~Fixed(void)
{
}

int	Fixed::getRawBits(void) const
{
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

float	Fixed::toFloat(void) const
{
	return (float(this->fixedPoint) / (1 << this->bits));
}

int	Fixed::toInt(void) const
{
	return (this->fixedPoint >> this->bits);
}

Fixed	&Fixed::min(Fixed &comp1, Fixed &comp2)
{
	return (comp1 < comp2 ? comp1 : comp2);
}

Fixed	&Fixed::max(Fixed &comp1, Fixed &comp2)
{
	return (comp1 > comp2 ? comp1 : comp2);
}

const Fixed	&Fixed::min(const Fixed &comp1, const Fixed &comp2)
{
	return (comp1 < comp2 ? comp1 : comp2);
}

const Fixed	&Fixed::max(const Fixed &comp1, const Fixed &comp2)
{
	return (comp1 > comp2 ? comp1 : comp2);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}