/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 06:13:59 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 13:55:02 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;
	void	*temp;

	if (!lst || !f)
		return (NULL);
	result = 0;
	while (lst)
	{
		temp = f(lst->content);
		new = ft_lstnew(temp);
		if (new == NULL)
			ft_lstclear(&result, del);
		ft_lstadd_back(&result, new);
		lst = lst->next;
	}
	return (result);
}
