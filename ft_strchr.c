/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 02:24:42 by mjadid            #+#    #+#             */
/*   Updated: 2023/12/14 06:30:45 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int n;
	
	i = 0;
	n = ft_strlen(s);
	if (!s )
		return NULL;
	while (i <= n)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return NULL;
}
