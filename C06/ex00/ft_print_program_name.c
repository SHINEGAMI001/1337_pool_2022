/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 01:43:33 by hlachhab          #+#    #+#             */
/*   Updated: 2022/04/14 01:39:15 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[0][i] != '\0' && ac)
	{
		write(1, &av[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
