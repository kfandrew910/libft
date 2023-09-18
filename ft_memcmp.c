#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *src1;
    unsigned char *src2;

    src1 = (unsigned char *)s1;
    src2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (src1[i] != src2[i])
            return *((src1 + i) - *(src2 + i));
        i++;
    }
    return *((src1 + i) - *(src2 + i));
}