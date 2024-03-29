/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 00:29:31 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/22 22:23:35 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb > 0)
	{
		while (i * i < nb && nb < 46341)
			i++;
		if (i * i == nb)
			return (i);
		else
			return (0);
	}
	else
		return (0);
}
