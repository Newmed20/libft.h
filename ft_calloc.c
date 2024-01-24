/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:24:46 by mjadid            #+#    #+#             */
/*   Updated: 2024/01/22 07:36:00 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*vd;
	size_t	result;

	result = count * size;
	if (size != 0 && count != result / size)
		return (NULL);
	vd = malloc(count * size);
	if (!vd)
		return (NULL);
	ft_bzero(vd, count * size);
	return (vd);
}
