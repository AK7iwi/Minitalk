/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 04:44:33 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 13:53:19 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*src;
	t_list	*dst;

	dst = *lst;
	while (dst)
	{
		src = dst->next;
		ft_lstdelone(dst, del);
		dst = src;
	}
	*lst = NULL;
}
