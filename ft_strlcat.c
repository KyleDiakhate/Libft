/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:05:17 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/07 18:52:20 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	tmp_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);		
	dst_len = ft_strlen(dst);
	i = 0;
	tmp_len = dst_len;
	if (dst_len >= size)
		return (size + src_len);
	while ((dst_len < size - 1) && (src[i]))
	{
		dst[dst_len] = src[i];
		dst_len ++;
		i++;
	}
	dst[dst_len] = '\0';
	return (tmp_len + src_len);
}
