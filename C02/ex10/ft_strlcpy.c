/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlachhab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 00:24:58 by hlachhab          #+#    #+#             */
/*   Updated: 2022/04/03 00:43:26 by hlachhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(src);
	i = 0;
	if (size != '\0')
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (len);
}
