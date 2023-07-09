/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:21:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/09 14:25:04 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void bin_to_char(int signal, char c)
{	
	c <<= 1;
	if (signal == SIGUSR1)
		c |= 1;
	ft_putstr_fd("oui3",1);
}

void	signal_handler_server(int signal, siginfo_t *info, void *context)
{
	static char *c;
	static int bit = 0;

	c = malloc(sizeof(char) + 1);
	
	(void)context;
	if (bit == 8)
	{
		ft_putchar_fd(*c, 1);
		c = 0;
		bit = 0;
	}
	else 
		bit++;
	// ft_putnbr_fd(i,1);
	bin_to_char(signal, *c);
	ft_putstr_fd("oui2",1);
	kill(info->si_pid, SIGUSR1);
}

int main()
{
	struct sigaction	act;

	ft_putnbr_fd(getpid(), 1);

    act.sa_sigaction = signal_handler_server;
    act.sa_flags = SA_SIGINFO;
	sigemptyset(&act.sa_mask);
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
	{
    	pause();
	}
}