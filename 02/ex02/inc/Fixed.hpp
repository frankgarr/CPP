#pragma once


#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
		Fixed(Fixed &fixp);
		Fixed(const Fixed &fixp);
		Fixed &operator=(const Fixed &fixp);
		~Fixed(void);
        
		Fixed(const int num);
		Fixed(const float num);
        
		Fixed operator+(const Fixed &fixp);
		Fixed operator-(const Fixed &fixp);
		Fixed operator*(const Fixed &fixp);
		Fixed operator/(const Fixed &fixp);
        
		bool	operator>(const Fixed &fixp) const;
		bool	operator<(const Fixed &fixp) const;
		bool	operator>=(const Fixed &fixp) const;
		bool	operator<=(const Fixed &fixp) const;
		bool	operator==(const Fixed &fixp) const;
		bool	operator!=(const Fixed &fixp) const;
        
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		static 	Fixed	&min(Fixed &comp1, Fixed &comp2);
		static	Fixed	&max(Fixed &comp1, Fixed &comp2);
		static	const Fixed	&min(const Fixed &comp1, const Fixed &comp2);
		static	const Fixed	&max(const Fixed &comp1, const Fixed &comp2);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;

    private:
        int	fixedPoint;
        static const int bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);