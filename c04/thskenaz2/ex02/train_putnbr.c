/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 21:27:36 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/19 21:34:09 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * (-1);
	}

	while (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}
