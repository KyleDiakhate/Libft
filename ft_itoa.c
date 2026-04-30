/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:45:59 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/04/30 17:26:18 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_itoa(int n)
{
	int cont; 
	int neg;
	int tmp; 
	char *ptr;

	cont = 0;
	neg = 0; 
	if(n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		cont = 1; 
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	tmp = n; 
	while (tmp != 0)
	{	
		tmp = tmp / 10;
		cont++;
	}
	ptr = malloc((cont + neg + 1) * sizeof(char));
	if(ptr == NULL)
		return (NULL);
	ptr[neg + cont] = '\0';
	while (cont > 0)
	{
		ptr[neg + cont - 1] = (n % 10) + '0';
		n = n / 10;
		cont--; 
	}
	if(neg == 1)
		ptr[0] = '-';
	return (ptr); 
}
