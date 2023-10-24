/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:17:29 by tbihoues          #+#    #+#             */
/*   Updated: 2023/10/24 03:16:52 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int		i;
	int		nb;
	char	*dest;

	i = compteur(n) - 1;
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
