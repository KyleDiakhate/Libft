/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:41:38 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/04/28 15:11:48 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen(little);
	i = 0;
	if (!little[0])
		return ((char *)big);
	while ((big[i]) && (i < len))
	{
		if ((i + little_len <= len)
			&& (ft_strncmp(&big[i], little, little_len) == 0))
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
