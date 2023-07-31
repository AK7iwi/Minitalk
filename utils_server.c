/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_server.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:28:10 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/31 21:01:27 by mfeldman         ###   ########.fr       */
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
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if(!s)
		return(0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char s2)
{
	char	*dest;
	int		i;

	i = 0;
	if (!s1)
	{
		s1 = (char *)(malloc(sizeof(char)));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	dest = malloc(sizeof(char) * (ft_strlen(s1) + 2));
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i++] = s2;
	dest[i] = '\0';
	return (free(s1), dest);
}
