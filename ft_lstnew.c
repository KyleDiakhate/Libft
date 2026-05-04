/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 13:17:44 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/04 13:36:35 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*no;

	no = malloc(sizeof(t_list));
	if (no == NULL)
		return (NULL);
	no->content = content;
	no->next = NULL;
	return (no);
}
