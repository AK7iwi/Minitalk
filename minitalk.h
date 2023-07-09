/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 22:54:16 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/03 21:07:44 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include "./libft/libft.h"

void    bin_to_char(int signal, char c);
void	signal_handler_server(int signal, siginfo_t * info, void *context);

void 	send_char(int pid, char *argv);
void 	char_to_bin(int pid, char c);
// void	signal_handler_client(int signal, siginfo_t *info, void *context);


#endif