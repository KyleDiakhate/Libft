/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyled <kyled@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 22:30:33 by kyled             #+#    #+#             */
/*   Updated: 2026/04/28 23:12:04 by kyled            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr; 

    ptr = malloc(nmemb * size); 

    if(ptr == NULL)
        return (NULL);
    ft_memset(ptr, 0, nmemb * size); 
    
    return(ptr); 
}
