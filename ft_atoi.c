#include "libft.h"

int ft_atoi(const char *nptr)
{
    int sign;
    int nbr;
    int i;

    i = 0;
    sign = 1;
    nbr = 0;
    if (nptr[0] == '-' || nptr[0] == '+')
    {
        if (nptr[0] == '-')
            sign = -1;
        i++;
    }
    while(nptr[i] <= '9' && nptr[i] >= '0')
    {
        nbr *= 10;
        nbr += nptr[i] - 48;
        i++;
    }
    return (nbr * sign);
}