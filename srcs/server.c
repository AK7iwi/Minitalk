/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:21:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/08/07 00:36:13 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_stock_msg(char c)
{
	static char	*msg = NULL;

	if (c)
		msg = ft_strjoin(msg, c);
	else
	{
		ft_putstr_fd(msg, 1);
		free(msg);
		msg = NULL;
	}
}

void	signal_handler_server(int signal, siginfo_t *info, void *context)
{	
	static int	bit = 0;
	static char	c = 0;

	(void)context;
	if (signal == SIGUSR1)
		c = (c << 1) | 1;
	else if (signal == SIGUSR2)
		c <<= 1;
	if (bit == 7)
	{
		ft_stock_msg(c);
		bit = 0;
		c = 0;
	}
	else
		bit++;
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	act;

	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	act.sa_sigaction = signal_handler_server;
	act.sa_flags = SA_SIGINFO;
	sigemptyset(&act.sa_mask);
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
	return (0);
}
