/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:21:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/19 17:26:53 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void bin_to_char(int signal, char c)
{	
	if (signal == SIGUSR1)
		c = (c << 1) | 1;
	else if(signal == SIGUSR2)
		c <<= 1;
	ft_putstr_fd("oui3",1);
}

void ft_stock_msg(char *c)
{
	char *stock;
	
	stock = malloc(sizeof(char) + 1);
	stock = ft_strjoin(stock, c);
}

void	signal_handler_server(int signal, siginfo_t *info, void *context)
{
	char *c;
	static int bit = 0;
	
	(void)context;
	if (bit == 8)
	{
		c = 0;
		bit = 0;
		ft_stock_msg(c);
	}
	else 
		bit++;
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
	// ft_putstr_fd(,1);
	return(0);
}