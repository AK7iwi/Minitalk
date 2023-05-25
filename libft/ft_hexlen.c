/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:59:17 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/21 02:47:11 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_hexlen(unsigned long long int nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}
