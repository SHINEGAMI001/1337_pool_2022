/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:20:22 by hlachhab          #+#    #+#             */
/*   Updated: 2022/04/14 22:28:09 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*d;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	d = (int *) malloc(size * sizeof(int));
	if (!d)
	{
		*range = 0;
		return (0);
	}
	*range = d;
	i = 0;
	while (i < size)
	{
		d[i] = min + i;
		i++;
	}
	return (size);
}
