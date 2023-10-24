/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tom <tom@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:18:39 by tbihoues          #+#    #+#             */
/*   Updated: 2023/10/24 03:17:21 by tom              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t s)
{
	unsigned int		i;
	unsigned const char	*t1;
	unsigned const char	*t2;

	i = 0;
	t1 = ptr1;
	t2 = ptr2;
	if (t1 == NULL || t2 == NULL)
		return (0);
	while (i < s)
	{
		if (t1[i] != t2[i])
			return (t1[i] - t2[i]);
		i++;
	}
	return (0);
}
