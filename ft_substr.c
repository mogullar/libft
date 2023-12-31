/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:35:11 by mogullar          #+#    #+#             */
/*   Updated: 2023/07/09 06:16:19 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*r;

	i = 0;
	if (!s || start >= ft_strlen((char *) s))
	{
		r = malloc(sizeof(char));
		if (r == 0)
			return (NULL);
		r[0] = '\0';
		return (r);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	r = malloc(sizeof(char) * (len + 1));
	if (r == 0)
		return (NULL);
	while (i < len)
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
