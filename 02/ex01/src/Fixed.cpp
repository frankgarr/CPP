#include <Fixed.hpp>

Fixed::Fixed(void) : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixp)
{
    std::cout << "Copy constructor called" << std::endl;
	*this = fixp;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = (num << this->bits);
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(num * (1 << this->bits));
}

Fixed	&Fixed::operator=(const Fixed &fixp)
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPoint = fixp.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
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

std::ostream	&operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
	return (os);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}