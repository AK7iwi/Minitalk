/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 04:09:10 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 15:57:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= ' ' && c <= '~'))
		return (0);
	return (16384);
}
/*
int main()

{
	printf("%d",ft_isprint(0));
	printf("%d",ft_isprint(31));
	printf("%d",ft_isprint(37));
        printf("%d",ft_isprint(54));
	printf("%d",ft_isprint(83));
	printf("%d",ft_isprint(103));
	printf("%d",ft_isprint(125));
	printf("%d",ft_isprint(320));
	printf("%d",ft_isprint(-26));

	printf("%s","\n");

        printf("%d",isprint(0));
	printf("%d",isprint(31));
        printf("%d",isprint(37));
	printf("%d",isprint(54));
	printf("%d",isprint(83));
	printf("%d",isprint(103));
	printf("%d",isprint(125));
	printf("%d",isprint(320));
        printf("%d",isprint(-26));
}

*/
