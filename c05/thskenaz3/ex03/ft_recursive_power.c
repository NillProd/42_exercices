/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 22:17:40 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/19 22:19:02 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
