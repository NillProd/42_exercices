/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:45:55 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/22 15:49:33 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	a = argc - 1;
	if (argc > 1)
	{
		while (a > 0)
		{
			b = 0;
			while (argv[a][b])
			{
				ft_putchar(argv[a][b]);
				b++;
			}
			a--;
			ft_putchar('\n');
		}
	}
}
