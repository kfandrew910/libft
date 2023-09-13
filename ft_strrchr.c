char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*ptr;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			ptr = (char *)(s + i);
		i++;
	}
	if (c == 0)
		return (ptr + i);
	if (ptr != 0)
		return (ptr);
	return (0);
}
