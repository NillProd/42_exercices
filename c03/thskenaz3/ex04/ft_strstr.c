/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:44:07 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/17 23:36:29 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	check_function(char *to_find, char *str)
{
	save = i;
	while (to_find[t] == str[i] && str[i] && to_find[i])
	{
		t++;
		i++;
		if (t == temp_t)
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int t;
	int temp_t;
	int save;

	t = 0;
	while (to_find[t])
		t++;
	temp_t = t;
	i = 0;
	t = 0;
	while (str[i])
	{
		if (to_find[t] == '\0')
			return (str);
		else if (check_function(to_find, &str[i]))
			return (&str[save]);
		i++;
		t = 0;
	}
	return (0);
}
