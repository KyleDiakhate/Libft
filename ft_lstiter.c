/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:25:30 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/11 18:38:44 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f (lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>

// void	f(void *content)
// {
// 	char *str;
// 	size_t  i;
// 	i = 0;
// 	str = (char *) content;
// 	while(str[i] != '\0')
// 	{
// 		if(str[i] >= 'a' && str[i] <= 'z')
// 			str[i] = str[i] - 32;
// 		i++;
// 	}
// }
// int main()
// {

// 	t_list *lst;
// 	t_list *aux;
// 	lst = NULL; 
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("olaa")));
//    	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("adeus")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("meu deus")));
// 	ft_lstiter(lst, f);
// 	aux = lst;
// 	while (aux != NULL)
// 	{
// 		printf("%s\n", (char *)aux->content);
// 		aux = aux->next;
// 	}
// }