/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:21:51 by mfeldman          #+#    #+#             */
/*   Updated: 2023/06/29 13:54:20 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void char_to_bin(char c, int pid)
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


int main (int argc, char **argv)
{
	if (argc == 3)
	{
		kill(ft_atoi(argv[1]),SIGUSR1);
		kill(ft_atoi(argv[1]),SIGUSR2);
	}
	else 
		return(0);
}