/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:17:29 by tbihoues          #+#    #+#             */
/*   Updated: 2023/10/19 19:09:53 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	compteur(int n)
{
	int	o;

	o = 0;
	while (n != 0)
	{
		n /= 10;
		o++;
	}
	return (o);
}

char	*ft_itoa(int n)
{
	int					i;
	long unsigned int	nb;
	char				*dest;

	i = compteur(n) -1;
	nb = n;
	dest = malloc(sizeof(char) * (compteur(n) + 2));
	if (!dest)
		return (NULL);
	if (nb < 0)
	{
		dest[0] = '-';
		nb = -nb;
	}
	else if (nb == 0)
		dest[0] = '0';
	while (nb != 0)
	{
		dest[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	dest[compteur(n)] = '\0';
	return (dest);
}
