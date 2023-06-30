/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:21:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/06/30 17:43:27 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bin_to_char(int signal, char *c) //enlever c
{
	
	if(signal == SIGUSR1) 
		*c = (*c << 1) | 1;
  	else if (signal == SIGUSR2) 
		*c <<= 1;
}
void	signal_handler(int signal)
{
	static char *c;
	char *tmp;
	int i ;
	
	i = 0;
	tmp = NULL;
	bin_to_char(signal, tmp);
	c = ft_strjoin(c,tmp);
	if(i ==7)
	{	
		i = 0;
		ft_putstr_fd(c, 1);
		c = NULL;
	}
}

int main()
{
	struct sigaction	act;

	ft_putnbr_fd(getpid(), 1);

	bzero(&act, sizeof(act));
	act.sa_handler = &signal_handler;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	// sigemptyset();
	// while (1)
    // 	pause(1);
	return(0);
}