/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:55:54 by rchallie          #+#    #+#             */
/*   Updated: 2024/01/09 02:08:56 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;

	p = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
