/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 18:44:43 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/04/16 20:15:29 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	
	while ((src[i] != '\0') && (i != size - 1))
	{
		dst[i] = src[i];
		i++;		
	}
	if(size > 0)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return i;
}

int main(void)
{
	char dst[5];
	

	printf("%ld", ft_strlcpy(dst, "olaaaasddasd", 0));
}