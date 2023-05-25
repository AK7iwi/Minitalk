/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 03:53:29 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/13 01:14:22 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && i++ < n - 1 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
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
	printf("%d, %d\n", ft_strncmp(s1, s2, 5), strncmp(s1, s2, 5));
	printf("%d, %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
	printf("%d, %d\n", ft_strncmp(s3, s4, 4), strncmp(s3, s4, 4));
	printf("%d, %d\n", ft_strncmp(s3, s4, 1), strncmp(s3, s4, 1));
	printf("%d, %d\n", ft_strncmp(s5, s6, 3), strncmp(s5, s6, 3));
	printf("%d, %d\n", ft_strncmp(s5, s5, 10), strncmp(s5, s5, 10));
	printf("%d, %d\n", ft_strncmp(s5, s5, 5), strncmp(s5, s5, 5));
	printf("%d, %d\n", ft_strncmp(s5, s7, 0), strncmp(s5, s7, 0));
	printf("%d, %d\n", ft_strncmp(s5, s7, 8), strncmp(s5, s7, 8));
}

*/