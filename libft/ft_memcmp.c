/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 05:06:09 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 16:01:25 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while (*(unsigned char *)s1 == *(unsigned char *)s2 && a < n - 1)
	{
		s1++;
		s2++;
		a++;
	}	
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
int	main(void)
{
	char s1[] = "Test";
	char s2[] = "Testu";
	char s3[] = "Same";
	char s4[] = "Size";
	char s5[] = "Shorter";
	char s6[] = "ThanMyself";
	char s7[] = "ShorterTest";
	printf("%d, %d\n", ft_memcmp(s1, s2, 5), memcmp(s1, s2, 5));
	printf("%d, %d\n", ft_memcmp(s1, s2, 2), memcmp(s1, s2, 2));
	printf("%d, %d\n", ft_memcmp(s3, s4, 4), memcmp(s3, s4, 4));
	printf("%d, %d\n", ft_memcmp(s3, s4, 1), memcmp(s3, s4, 1));
	printf("%d, %d\n", ft_memcmp(s5, s6, 3), memcmp(s5, s6, 3));
	printf("%d, %d\n", ft_memcmp(s5, s5, 10), memcmp(s5, s5, 10));
	printf("%d, %d\n", ft_memcmp(s5, s5, 5), memcmp(s5, s5, 5));
	printf("%d, %d\n", ft_memcmp(s5, s7, 0), memcmp(s5, s7, 0));
	printf("%d, %d\n", ft_memcmp(s5, s7, 8), memcmp(s5, s7, 8));
}
*/
