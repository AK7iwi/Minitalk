/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:03:33 by mfeldman          #+#    #+#             */
/*   Updated: 2023/05/05 20:29:05 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_int(t_stack **lst, int val)
{
	t_stack		*new_node;
	t_stack		*last;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->value = val;
	new_node->next = NULL;
	if (*lst == NULL)
		*lst = new_node;
	else
	{
		last = *lst;
		while (last->next)
			last = last->next;
		last->next = new_node;
	}
}
