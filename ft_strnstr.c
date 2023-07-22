/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:34:35 by mogullar          #+#    #+#             */
/*   Updated: 2023/07/09 00:40:28 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (need[0] == '\0')
	{
		return ((char *) s);
	}
	while (s[i] != '\0' && i < len)
	{
		while (s[i + j] == need [j] && i + j < len)
		{
			if (need[j + 1] == '\0')
			{
				return ((char *) &s[i]);
			}
			j ++;
		}
		j = 0;
		i++;
	}
	return (0);
}
