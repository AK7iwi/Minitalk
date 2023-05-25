/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 02:50:09 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/19 16:45:01 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
/*

int main()
{
    char s[] = "tripouille";
	char s2[] = "ltripouiel";

    printf("%s",ft_strrchr(s, 't')); 
    printf("%s",strrchr(s, 't'));
    printf("%s", "\n");
	printf("%s",ft_strrchr(s, 'l'));
    printf("%s",strrchr(s, 'l'));
    printf("%s", "\n");
	printf("%s",ft_strrchr(s2, 'l')) ; 
    printf("%s",strrchr(s2, 'l'));
    printf("%s", "\n");
	printf("%s",ft_strrchr(s, 'z')); 
    printf("%s",strrchr(s, 'z'));
    printf("%s", "\n");
	printf("%s",ft_strrchr(s, 0)); 
    printf("%s",strrchr(s, 0));
    printf("%s", "\n");
	printf("%s",ft_strrchr(s, 't' + 256)); 
    printf("%s",strrchr(s, 't' + 256));
    
}
*/
