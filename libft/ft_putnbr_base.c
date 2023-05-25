/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:10:41 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/20 20:32:47 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(unsigned long long int nb, char *base)
{
	if (nb >= 16)
	{
		ft_putnbr_base(nb / 16, base);
		write(1, &base[nb % 16], 1);
	}
	else
		write(1, &base[nb], 1);
}
