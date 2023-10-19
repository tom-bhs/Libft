#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>


int	ft_atoi(char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char	*ft_strcpy(char *dest, char *src);
size_t	ft_strlen(const char *s);
