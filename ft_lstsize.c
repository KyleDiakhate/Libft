/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 13:43:42 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/11 14:59:20 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *lst;
// 	int size;
// 	lst = ft_lstnew("Olaaa");
// 	ft_lstadd_front(&lst, ft_lstnew("Adeus"));
// 	ft_lstadd_front(&lst, ft_lstnew("Meu deus"));
// 	size = ft_lstsize(lst);
// 	printf("Size of my list: %d\n", size);
// }