/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 15:17:34 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/11 17:38:21 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone (*lst, del);
		*lst = temp;
	}
}

// #include <stdio.h>

// void del(void *content) {
//     free(content);
// }

// int main(void)
// {
//     t_list *lst;

// 	lst = NULL;
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("A")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("B")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("C")));

//     ft_lstclear(&lst, del);
//     if (lst == NULL)
//         printf("Sucesso: O ponteiro da lista agora é NULL.\n");
//     else
//         printf("Erro: A lista ainda aponta para algo.\n");

//     return (0);
// }