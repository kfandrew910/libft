#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_strchr(const char *s, int c);
int	ft_strlen(char *str);
char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
