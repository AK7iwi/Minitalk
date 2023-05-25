/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:04:54 by mfeldman          #+#    #+#             */
/*   Updated: 2023/05/05 20:41:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(t_stack **lst)
{
	t_stack	*current;
	t_stack	*temp;

	if (lst && *lst)
	{
		current = *lst;
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*lst = NULL;
	}
}
