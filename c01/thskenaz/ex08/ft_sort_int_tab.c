/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 21:20:04 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/11 21:24:33 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int k;
	int l;
	int i;
	int j;
	int temp;

	temp = 0;
	k = 0;
	l = 0;
	j = 0;
	i = size - 2;
	while (i >= 0)
	{
		while (j <= i)
		{
			while (tab[j + 1] < tab[j])
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i--;
	}
}
