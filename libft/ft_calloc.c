/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 06:26:20 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 13:29:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;
	size_t	x;

	x = nmemb * size;
	if (nmemb && ((x / nmemb) != size))
		return (NULL);
	dest = (void *)malloc(size * nmemb);
	if (!dest)
		return (NULL);
	ft_bzero(dest, (size * nmemb));
	return (dest);
}
