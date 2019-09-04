/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 15:54:21 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/22 17:52:49 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_ascii(int a, char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < (a - 1))
	{
		j = 0;
		while (tab[i][j] == tab[i + 1][j])
			j++;
		if (tab[i][j] > tab[i + 1][j])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}

void	ft_tab(int a, char **tab)
{
	int i;
	int j;

	if (a > 1)
	{
		i = 1;
		while (i < a)
		{
			j = 0;
			while (tab[i][j])
			{
				ft_putchar(tab[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	ft_sort_ascii(argc, argv);
	ft_tab(argc, argv);
	return (0);
}
