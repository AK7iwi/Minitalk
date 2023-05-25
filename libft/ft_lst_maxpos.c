/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_maxpos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:18:41 by mfeldman          #+#    #+#             */
/*   Updated: 2023/05/05 20:42:05 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lst_maxpos(t_stack *tmp)
{
	int	max;
	int	i;

	max = ft_lstmax(tmp);
	i = 1;
	while (tmp)
	{
		if (tmp->value == max)
			break ;
		tmp = tmp->next;
		i++;
	}
	return (i);
}
