/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyled <kyled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 23:14:17 by kyled             #+#    #+#             */
/*   Updated: 2026/04/29 00:06:52 by kyled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t len_s; 
    char *ptr; 
    
    len_s = ft_strlen(s);
    ptr = malloc((len_s + 1) * sizeof(char)); 
    if(ptr == NULL)
        return (NULL); 
    ft_strlcpy(ptr, s, (len_s + 1)); 
    return(ptr); 
}
