
void	bzero(void *s, size_t n)
{
	unsigned int i;
	i = 0;
	while (i < n)
	{
		*(s + i) = 0;
		i++;
	}
}
