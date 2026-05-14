/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 13:52:58 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/11 16:15:00 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *lst;
// 	t_list *last;
// 	lst = NULL;
// 	ft_lstadd_front(&lst, ft_lstnew("Terceiro"));
//     ft_lstadd_front(&lst, ft_lstnew("Segundo"));
//     ft_lstadd_front(&lst, ft_lstnew("Primeiro"));
// 	last = ft_lstlast(lst);
// 	printf("%s\n", (char *)last->content);
// }