/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 00:36:29 by mjadid            #+#    #+#             */
/*   Updated: 2024/01/06 00:36:30 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	slen;
	size_t			i;
	char			*subs;

	i = 0;
	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (slen <= (size_t)start)
		return (ft_strdup(""));
	if (len >= ft_strlen(s) - start)
		return (ft_strdup(s + start));
	subs = malloc(len + 1);
	if (!subs)
		return (0);
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
