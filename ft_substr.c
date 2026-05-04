/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:36:12 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/04 12:36:19 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len_s < len)
		len = len_s - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
