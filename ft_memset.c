/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbihoues <tbihoues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:18:59 by tbihoues          #+#    #+#             */
/*   Updated: 2023/10/17 18:21:01 by tbihoues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t     i;

    if (!b)
        return (NULL);

    i = 0;
    while (i < len)
    {
            *(unsigned char*)(b + i) = (unsigned char)c;
            i++;
    }
    return (b);

}