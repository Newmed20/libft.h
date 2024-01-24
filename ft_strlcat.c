/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:44:36 by mjadid            #+#    #+#             */
/*   Updated: 2024/01/20 15:17:58 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	slen;
	unsigned int	dlen;

	slen = ft_strlen(src);
	j = 0;
	if (!dst && dstsize == 0)
		return (slen);
	dlen = ft_strlen(dst);
	i = dlen;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (src[j] != '\0' && j < dstsize - dlen - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (slen + dlen);
}
