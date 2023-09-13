char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return (ptr + i);
		i++;
	}
	if(c == 0)
		return (ptr);
	return (0);
}
