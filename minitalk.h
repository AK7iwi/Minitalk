/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 22:54:16 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/21 00:10:47 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>

void    bin_to_char(int signal, char c);
void	signal_handler_server(int signal, siginfo_t * info, void *context);

void 	send_char(int pid, char *argv);
void 	char_to_bin(int pid, char c);
// void	signal_handler_client(int signal, siginfo_t *info, void *context);

size_t	ft_strlen(const char *s);
int	    ft_atoi(const char *nptr);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_strjoin(char  *s1, char *s2);

#endif