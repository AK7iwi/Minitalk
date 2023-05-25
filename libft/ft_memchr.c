/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 03:59:58 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 15:57:26 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int main()
{
    printf("%p", memchr("ouioehfi rgrog", 'u', 10)); 
    printf("%s", "\n");
    printf("%p", ft_memchr("ouioehfi rgrog", 'u',10));

} 
*/
