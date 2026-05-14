/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:36:28 by ltomas-d          #+#    #+#             */
/*   Updated: 2026/05/11 18:38:02 by ltomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*temp_content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		temp_content = f(lst->content);
		new_node = ft_lstnew(temp_content);
		if (new_node == NULL)
		{
			del(temp_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
// #include <stdio.h>
// void	d(void *content)
// {
// 	free(content);
// }
// void	*f(void *content)
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
// 	return (str);
// }
// int main(void)
// {
// 	t_list *new_list;
// 	t_list *lst;
// 	t_list *aux;
// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("olaa")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("adeus")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("meu deus")));
// 	new_list = ft_lstmap(lst, f, d);
// 	aux = new_list;
// 	while (aux != NULL)
// 	{
// 		printf("%s\n", (char *)aux->content);
// 		aux = aux->next;
// 	}
// 	return (0);
// }