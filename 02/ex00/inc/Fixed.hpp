#include <string>
#include <iostream>
#include <cstdlib>

class Fixed
{
    public:
    Fixed(void);
    ~Fixed(void);
    Fixed(const Fixed &fixp);
    Fixed &operator=(const Fixed &fixp);
    void	setRawBits(int const raw);
    int		getRawBits(void) const;
    private:
        int	fixedPoint;
        static const int bits = 8;
};