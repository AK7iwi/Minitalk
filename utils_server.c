/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_server.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:28:10 by mfeldman          #+#    #+#             */
/*   Updated: 2023/08/06 04:08:05 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	b;

	b = n;
	if (b < 0)
	{
		ft_putchar_fd('-', fd);
		b *= -1;
	}
	if (b <= 9)
		ft_putchar_fd('0' + b, fd);
	else if (b > 9)
	{
		ft_putnbr_fd(b / 10, fd);
		ft_putchar_fd('0' + b % 10, fd);
	}
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
	ft_putchar_fd('\n', 1);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

size_t	ft_strlen(char *s)
{
	
	size_t	i;

	i = 0;
	if (!s)
		return(0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char c)
{
	char	*dest;
	int		i;

	i = 0;
	if (s1 == NULL)
	{
		s1 = (malloc(1));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	
	dest = malloc(sizeof(char) * (ft_strlen(s1) + 2));
	if (!dest)
		return (free(s1), NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i++] = c;
	dest[i] = '\0';
	
	free(s1);
	return (dest);
}