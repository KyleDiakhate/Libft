/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 18:12:47 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/07 17:31:43 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest1;
	unsigned const char	*src1;
	size_t				i;

	if (!src && !dest)
		return (NULL);
	dest1 = (unsigned char *) dest;
	src1 = (unsigned const char *) src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	i = n;
	if (dest > src)
	{
		while (i > 0)
		{
			i--;
			dest1[i] = src1[i];
		}
	}
	return (dest);
}
