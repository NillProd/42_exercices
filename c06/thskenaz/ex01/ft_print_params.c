/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:29:55 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/22 15:52:57 by thskenaz         ###   ########.fr       */
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

	a = 1;
	if (argc >= 1)
	{
		while (a < argc)
		{
			b = 0;
			while (argv[a][b])
			{
				ft_putchar(argv[a][b]);
				b++;
			}
			a++;
			ft_putchar('\n');
		}
	}
}
