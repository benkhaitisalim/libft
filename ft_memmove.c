/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsalim <bsalim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 06:48:51 by bsalim            #+#    #+#             */
/*   Updated: 2024/11/14 02:25:05 by bsalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*sorc;
	size_t			index;

	index = 0;
	if (dst == src)
	{
		return (dst);
	}
	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	index = 0;
	if (dest > sorc)
	{
		while (len-- > 0)
			dest[len] = sorc[len];
	}
	else
		ft_memcpy(dest, sorc, len);
	return (dest);
}
