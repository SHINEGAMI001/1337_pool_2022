/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:40:03 by hlachhab          #+#    #+#             */
/*   Updated: 2022/04/14 22:57:41 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*d;
	int		i;
	int		a;
	int		c;

	d = (char *) malloc(sizeof(strs));
	i = 0;
	a = 0;
	while (size > i)
	{
		c = 0;
		while (strs[i][c] != '\0')
		{
			d[a++] = strs[i][b++];
		}
		b = 0;
		while (sep[c] != '\0' && i != size - 1)
		{
			d[a++] = sep[b++];
		}
		i++;
	}
	d[a] = '\0';
	return (d);
}
