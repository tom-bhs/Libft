/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:58:53 by tom               #+#    #+#             */
/*   Updated: 2023/10/24 03:19:26 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

char	*ft_word(char *s, char c)
{
	char	*tab;
	int		wlen;
	int		i;

	wlen = 0;
	while (s[wlen] != c)
		wlen++;
	tab = malloc(sizeof(char) * wlen + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < wlen)
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	char	**tab;
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	tab = malloc(sizeof(char *) * (countwords(str, c) + 1));
	if (!tab)
		return (NULL);
	while (*str)
	{
		if (*str != '\0')
		{
			tab[i] = ft_word(str, c);
			i++;
		}
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
	}
	tab[i] = 0;
	return (tab);
}
