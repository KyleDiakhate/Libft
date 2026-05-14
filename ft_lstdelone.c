/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:06:34 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/11 17:16:42 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del (lst->content);
	free(lst);
}

// #include <stdio.h>
// void	del(void *content)
// {
// 	free(content);
// }

// int main(void)
// {
// 	t_list *first_node;
// 	t_list *lst;
// 	t_list *aux;
// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Primeiro")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Segundo")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Terceiro")));
// 	first_node = lst;
// 	lst = lst->next;

// 	ft_lstdelone(first_node, del);
// 	aux = lst;
// 	while(aux != NULL)
// 	{
// 		printf("%s\n", (char *) aux->content);
// 		aux = aux->next;
// 	}
// }