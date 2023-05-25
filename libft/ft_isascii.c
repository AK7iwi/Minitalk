/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:18:37 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 16:00:54 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}
/*
int main()
{
	printf("%d",ft_isascii(-58));
	printf("%d",ft_isascii(20));
	printf("%d",ft_isascii(31));
    printf("%d",ft_isascii(52));
	printf("%d",ft_isascii(67));
	printf("%d",ft_isascii(110));
	printf("%d",ft_isascii(900000));

	printf("%s","\n");

    printf("%d",isascii(-58));
	printf("%d",isascii(20));
    printf("%d",isascii(31));
	printf("%d",isascii(52));
	printf("%d",isascii(67));
	printf("%d",isascii(110));
	printf("%d",isascii(900000));
}

*/
