/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:21:51 by mfeldman          #+#    #+#             */
/*   Updated: 2023/06/30 15:53:26 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void char_to_bin(int pid, char c)
{
	int bit;
	int shift;

	bit = 0;
	shift = 7; 
	
	while(bit <= shift)
    {
          if ((c >> bit) & 1)
              kill(pid, SIGUSR1);
          else
              kill(pid, SIGUSR2);
		bit++;
		shift--;
	}
}

void send_char(int pid, char *argv)
{
	size_t i;
	
	i = 0;
	while(i < ft_strlen(argv))
		char_to_bin(pid, argv[i++]);
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		send_char(ft_atoi(argv[1]), argv[2]);
	}
	else 
		return(0);
	// sigemptyset();
}