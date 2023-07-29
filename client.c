/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:21:51 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/29 02:52:28 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int a;

void char_to_bin(int pid, char c)
{
	int bit;

	bit = 0;
	while(bit <= 7) 
    {
		a = 0;
		if ((c >> bit) & 1)
			kill(pid, SIGUSR1);
        else
			kill(pid, SIGUSR2);
		bit++;
		sleep(1);
		while(a == 0)
			pause();
	}
	
}

void send_char(int pid, char *argv)
{
	size_t i;
	
	i = 0;
	while(i <= ft_strlen(argv))
		char_to_bin(pid, argv[i++]);
}

void	signal_handler_client(int signal, siginfo_t *info, void *context)
{	
	(void)context;
	(void)info;
	if (signal == SIGUSR1)
		a = 1;
	// else if(signal == SIGUSR2)
}

int main (int argc, char **argv)
{
	struct sigaction	act;

	a = 0;
    act.sa_sigaction = signal_handler_client;
    act.sa_flags = SA_SIGINFO;
	sigemptyset(&act.sa_mask);
	sigaction(SIGUSR1, &act, NULL);
	// sigaction(SIGUSR2, &act, NULL);
	if (argc == 3)
		send_char(ft_atoi(argv[1]), argv[2]);
	else 
		return(0);
	return(0);
}