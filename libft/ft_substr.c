/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 03:04:31 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 16:26:00 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	lensrc;
	size_t	i;

	i = 0;
	lensrc = ft_strlen(s);
	if (len + start > lensrc)
		len = lensrc - start;
	if (start > lensrc)
		return (ft_calloc(1, sizeof (char)));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (start < (unsigned int)lensrc)
	{
		while (i < len)
			str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}
