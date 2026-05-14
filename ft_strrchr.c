/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 15:41:08 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/13 13:52:30 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if ((s[i] == (char) c))
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

#include <stdio.h>
int main(void){
	char c = 'l';
	char str[] = "ola o meu nome e lassana";
	
	printf("%s\n", ft_strrchr(str, c));
		
}