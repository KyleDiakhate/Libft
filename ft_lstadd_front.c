/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 13:37:28 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/11 14:50:48 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list *lst;
// 	t_list *aux;
// 	lst = NULL;
// 	ft_lstadd_front(&lst, ft_lstnew("I'm the third"));
// 	ft_lstadd_front(&lst, ft_lstnew("I'm the second"));
// 	ft_lstadd_front(&lst, ft_lstnew("I'm the first"));
// 	aux = lst;
// 	while(aux != NULL)
// 	{
// 		printf("Content: %s\n", (char *)aux->content);
// 		aux = aux->next;
// 	}
// 	return(0);
// }