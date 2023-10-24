/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:20:05 by tbihoues          #+#    #+#             */
/*   Updated: 2023/10/24 18:25:43 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	long unsigned int	i;
	int					o;

	i = 0;
	o = 0;
	if (s1[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' || i < len)
	{
		while (s1[i] == s2[o])
		{
			i++;
			o++;
			if (s1[i] == '\0' && s2[o] == '\0')
				return (0);
		}
		o = 0;
		i++;
	}
	return (0);
}
