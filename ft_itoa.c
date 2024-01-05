/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 22:32:06 by mjadid            #+#    #+#             */
/*   Updated: 2024/01/05 22:32:07 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*ascii;
	int		size;
	long	longn;

	longn = n;
	size = ft_size(longn);
	ascii = malloc(size + 1);
	if (!ascii)
		return (NULL);
	if (longn < 0)
	{
		longn *= -1;
		ascii[0] = '-';
	}
	if (longn == 0)
		ascii[0] = '0';
	ascii[size--] = '\0';
	while (longn != 0)
	{
		ascii[size] = longn % 10 + '0';
		longn /= 10;
		size--;
	}
	return (ascii);
}
