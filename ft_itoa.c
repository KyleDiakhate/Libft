/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:45:59 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/05 15:05:34 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_numstr(char *ptr, int n, int cont, int neg)
{
	ptr[neg + cont] = '\0';
	while (cont > 0)
	{
		ptr[neg + cont - 1] = (n % 10) + '0';
		n = n / 10;
		cont--;
	}
	if (neg == 1)
		ptr[0] = '-';
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		cont;	
	int		neg;
	char	*ptr;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	cont = ft_numlen(n);
	ptr = malloc ((cont + neg + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr = ft_fill(ptr, n, cont, neg);
	return (ptr);
}
