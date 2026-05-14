/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 14:19:34 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/11 16:49:30 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_lst;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last_lst = ft_lstlast (*lst);
		last_lst->next = new;
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*lst;
// 	t_list *aux;
// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew("Primeiro"));
// 	ft_lstadd_back(&lst, ft_lstnew("Segundo"));
// 	ft_lstadd_back(&lst, ft_lstnew("Terceiro"));
// 	aux = lst;
// 	while(aux != NULL)
// 	{
// 		printf("%s\n", (char *)aux->content);
// 		aux = aux->next;
// 	}
// }