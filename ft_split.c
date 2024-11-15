/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 07:08:59 by bsalim            #+#    #+#             */
/*   Updated: 2024/11/14 04:31:13 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	ssize_t	lenalloc(const char *str, char c)
{
	ssize_t	i;
	ssize_t	bdawhbes;

	i = 0;
	bdawhbes = 0;
	while (*str)
	{
		if (*str != c && bdawhbes == 0)
		{
			bdawhbes = 1;
			i++;
		}
		else if (*str == c)
			bdawhbes = 0;
		str++;
	}
	return (i);
}

static char	**freesplit(char **split, ssize_t j)
{
	if (!split[j])
	{
		while (j > 0)
			free(split[--j]);
		free(split);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	ssize_t	i;
	ssize_t	j;
	ssize_t	start;
	char	**split;

	i = lenalloc (s, c) + 1;
	split = (char **)ft_calloc(i, sizeof(char *));
	if (!split)
		return (NULL);
	i = -1;
	j = 0;
	start = -1;
	while (++i <= (int)ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || !s[i]) && start > -1)
		{
			split[j] = (char *)ft_substr(s, start, i - start);
			if (!split[j++])
				return (freesplit(split, --j));
			start = -1;
		}
	}
	return (split);
}
