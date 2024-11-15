/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:18:04 by bsalim            #+#    #+#             */
/*   Updated: 2024/11/10 06:15:21 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;
	size_t			len;

	str = NULL;
	i = 0;
	len = ft_strlen(s);
	while (len - 1 > 0 && s[i])
	{
		if (s[i] == (char)c)
			str = (char *)s + i;
		i++;
	}
	if (s[i] == (char)c)
		str = (char *)s + i;
	return (str);
}
