/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:21:28 by mfeldman          #+#    #+#             */
/*   Updated: 2023/06/29 05:32:01 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int print(char *msg)
{
	int i ;
	
	i = getpid();
	printf("%d",i);
	printf("%s",msg);
	return(i);
}

void	sigint_handler(int signal)
{
	if (signal == SIGUSR1)
		printf("\nSIGUSR1\n");
	else if (signal == SIGUSR2)
		printf("\nSIGUSR2\n");
}

int main()
{
	struct sigaction	act;

	bzero(&act, sizeof(act));
	act.sa_handler = &sigint_handler;
	sigaction(SIGUSR1, &act, NULL);
	
	printf("rf");
	return(0);
}