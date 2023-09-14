
#include "libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *) dest + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dest);
}
