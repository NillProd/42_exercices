/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 03:10:04 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/15 15:46:00 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned nb)
{
	unsigned int a;
	unsigned int b;
	unsigned int i;

	a = 0;
	while (dest[a])
		a++;
	b = 0;
	i = 0;
	while (src[b] && i < nb)
	{
		dest[a] = src[b];
		a++;
		b++;
		i++;
	}
	dest[a] = '\0';
	return (dest);
}
