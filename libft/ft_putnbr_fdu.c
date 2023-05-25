/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fdu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:00:00 by mfeldman          #+#    #+#             */
/*   Updated: 2022/07/21 02:46:36 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fdu(unsigned int n, int fd)
{
	long long	b;

	b = n;
	if (b < 0)
	{
		ft_putchar_fd ('-', fd);
		b *= -1;
	}
	if (b <= 9)
		ft_putchar_fd ('0' + b, fd);
	else if (b > 9)
	{
		ft_putnbr_fdu (b / 10, fd);
		ft_putchar_fd ('0' + b % 10, fd);
	}
}
