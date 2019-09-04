/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 22:08:31 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/15 16:37:41 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int i;

	a = 0;
	while (dest[a])
		a++;
	dest[a] = dest[a] - 1;
	b = 0;
	while (src[b] && b < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	i = 0;
	i = a + b;
	return (i);
}
