/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogullar <finarfin40@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 00:19:41 by mogullar          #+#    #+#             */
/*   Updated: 2023/07/11 02:42:58 by mogullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_check(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len_check(n);
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	if (n < 0)
	{
		p[0] = '-';
		n *= -1;
	}
	p[len] = '\0';
	while (n > 0)
	{
		p[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (p);
}
