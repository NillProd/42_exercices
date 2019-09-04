/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_ft_print_comb2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 20:18:47 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/05 20:37:59 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_lesschar(int a, int b)
{
	char adiv;
	char amod;
	char bdiv;
	char bmod;

	adiv = a / 10 + '0';
	amod = a % 10 + '0';
	bdiv = b / 10 + '0';
	bmod = b % 10 + '0';
	ft_putchar(bdiv);
	ft_putchar(bmod);
	ft_putchar(' ');
	ft_putchar(adiv);
	ft_putchar(amod);
	if (b < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 1;
	b = 0;
	while (b <= 98)
	{
		while (a <= 99)
		{
			ft_lesschar(a, b);
			a++;
		}
		b++;
		a = b + 1;
	}
}
