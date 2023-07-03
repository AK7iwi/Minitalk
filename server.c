/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:21:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/03 14:36:02 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void bin_to_char(int signal, char c) //enlever c
{	
	if(signal == SIGUSR1) 
		c = (c << 1) | 1;
  	else if (signal == SIGUSR2) 
		c <<= 1;
	ft_putstr_fd("oui3",1);
}

void	signal_handler(int signal)
{
	static char c;
	static int i;
	
	i = 1;
	c = NULL;
	bin_to_char(signal, c);
	if (i == 8)
		ft_putchar_fd(c, 1);
	i++;
	ft_putstr_fd("oui2",1);
}

int main()
{
	struct sigaction	act;

	ft_putnbr_fd(getpid(), 1);

	bzero(&act, sizeof(act));
	act.sa_handler = signal_handler;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
    	pause();
}