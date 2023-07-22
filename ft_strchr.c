/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:23:16 by mogullar          #+#    #+#             */
/*   Updated: 2023/07/09 03:16:24 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (unsigned char) c;
	while (*s != c && *s != '\0')
		s++;
	if (*s == '\0')
	{
		if (c == '\0')
			return ((char *)s);
		else
			return (NULL);
	}
	return ((char *)s);
}
