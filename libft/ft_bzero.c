/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 04:06:53 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 15:57:01 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n)
	{
		*str = 0;
		str++;
		n--;
	}
}
/*
int main()
{
    char str1[20] = "efog";
    char str2[20] = "efog";
    bzero(str1 + 1 , 3 * sizeof(char));
    ft_bzero(str2 + 1, 3 * sizeof(char));
  
    printf("%s", str1);
    printf("%s","\n");
    printf("%s",str2);
}
*/
