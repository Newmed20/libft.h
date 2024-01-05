/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:02:49 by mjadid            #+#    #+#             */
/*   Updated: 2023/12/30 02:02:18 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	unsigned int	temp;
	unsigned int	i;

	temp = 1;
	i = 0;
	while (s1[i] && temp == 1)
	{
		if (ft_strchr(set, s1[i]) == 0)
			temp = 0;
		i++;
	}
	return (i);
}

static int	ft_end(char const *s1, char const *set)
{
	unsigned int	temp;
	unsigned int	i;

	i = ft_strlen(s1) - 1;
	temp = 1;
	while (i > 0 && temp == 1)
	{
		if (ft_strchr(set, s1[i]) == 0)
			temp = 0;
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	n;
	char			*trimmed;

	start = ft_start(s1, set);
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	if (start == ft_strlen(s1))
	{
		trimmed = ft_strdup("");
		if (!trimmed)
			return (NULL);
		return (trimmed);
	}
	end = ft_end(s1, set);
	n = end - start + 3;
	trimmed = ft_substr(s1, start - 1, n);
	return (trimmed);
}
