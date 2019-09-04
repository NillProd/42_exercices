/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 17:50:14 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/22 16:36:27 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int a;
	int b;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	b = power;
	a = 1;
	while (b > 0)
	{
		a = a * nb;
		b--;
	}
	return (a);
}
