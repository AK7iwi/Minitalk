/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 04:06:44 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 15:57:11 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (!(c >= 'a' && c <= 'z'))
	{
		if (!(c >= 'A' && c <= 'Z'))
			return (0);
	}
	return (1024);
}
/*
int main()
{
	printf("%d",ft_isalpha(0));
	printf("%d",ft_isalpha(68));
	printf("%d",ft_isalpha(118));
        printf("%d",ft_isalpha(140));
	printf("%d",ft_isalpha(200));
	printf("%d",ft_isalpha(500));
	printf("%d",ft_isalpha(-26));

	printf("%s","\n");
        printf("%d",isalpha(0));
	printf("%d",isalpha(68));
        printf("%d",isalpha(118));
	printf("%d",isalpha(140));
	printf("%d",isalpha(200));
	printf("%d",isalpha(500));
	printf("%d",isalpha(-26));

}
*/
