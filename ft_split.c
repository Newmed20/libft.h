/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjadid <mjadid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:51:06 by mjadid            #+#    #+#             */
/*   Updated: 2024/01/05 20:00:50 by mjadid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_wordcount(const char *str, char c)
{
	unsigned int	i;
	unsigned int	counter;
	unsigned int	flag;

	counter = 0;
	flag = 1;
	i = 0;
	while (str && str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0') && flag == 1)
		{
			counter++;
			flag = 0;
		}
		else if (str[i] == c && str[i + 1] != c)
			flag = 1;
		i++;
	}
	return (counter);
}

static char	**ft_free(char **str, unsigned int index)
{
	unsigned int	i;

	i = 0;
	while (i < index)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

int	ft_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s && s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char			**mysplit;
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	if (!s)
		return (NULL);
	counter = ft_wordcount(s, c);
	mysplit = (char **)malloc((counter + 1) * sizeof(char *));
	if (!mysplit)
		return (NULL);
	while (i < counter)
	{
		while (*s && *s == c)
			s++;
		mysplit[i] = ft_substr(s, 0, ft_len(s, c));
		if (!mysplit[i])
			return (ft_free(mysplit, i));
		i++;
		s = s + ft_len(s, c);
	}
	mysplit[i] = NULL;
	return (mysplit);
}
