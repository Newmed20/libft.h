/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:24:46 by mjadid            #+#    #+#             */
/*   Updated: 2024/01/06 00:24:47 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*vd;

	vd = (void *)malloc(count * size);
	if (!vd)
		return (NULL);
	ft_bzero(vd, count * size);
	return (vd);
}
