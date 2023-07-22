/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:20:27 by mogullar          #+#    #+#             */
/*   Updated: 2023/07/09 00:21:01 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p;
	const char	*p2;
	size_t		i;

	i = 0;
	p = (char *)dst;
	p2 = (char *)src;
	while (i < n && (src || dst))
	{
		p[i] = p2[i];
		i++;
	}
	return (dst);
}
