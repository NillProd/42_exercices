/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 20:41:21 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/10 18:26:10 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = 0;
	d = 1;
	u = 2;
	while (c <= 7)
	{
		while (d <= 8)
		{
			while (u <= 9)
			{
				ft_putchar(c + 48, d + 48, u + 48);
				if (!(c == 7 && d == 8 && u == 9))
					write(1, ", ", 2);
				u++;
			}
			d++;
			u = d + 1;
		}
		c++;
		d = c + 1;
		u = d + 1;
	}
}
