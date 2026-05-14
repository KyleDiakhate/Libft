/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 13:17:44 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/11 14:50:58 by ltomas-d         ###   ########.fr       */
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

// #include <stdio.h>
// int main()
// {
// 	t_list *list;
// 	list = ft_lstnew("Hello");
// 	printf("Content in node: %s\n", (char *) list->content);
// 	printf("Next one is NULL? %s\n", (list->next == NULL) ? "Sim (0)" : "Não");
// 	free(list);
// 	return(0);
// } 