#include "libft.h"

char    *ft_strnstr(const char *big,	const char *little, size_t len)
{
    size_t i;
    size_t j;
    char *ptr;

    i = 0;
    if (little[0] == 0)
        return ((char *)big);
    while (big[i] && i < len)
    {
        if(big[i] == little[0])
        {
            j = 0;
            ptr = (char *)big + i;
            while (i + j < len && little[j] && little[j] == big[i + j])
                j++;
            if (little[j] == '\0')
                return (ptr);
        }
        i++;
    }
    return (NULL);
}