/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 01:21:51 by mfeldman          #+#    #+#             */
/*   Updated: 2023/06/29 05:18:18 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"


int main (int argc, char **argv)
{
	if (argc == 3)
	{
		kill(2,SIGUSR1); //int kill(pid_t pid, int sig);
    	printf("%s",*argv);
	}
	else 
		return(0);
}