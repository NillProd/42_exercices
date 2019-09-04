/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thskenaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:43:48 by thskenaz          #+#    #+#             */
/*   Updated: 2019/08/15 17:43:50 by thskenaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_minuscule(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

char	*ft_first_capitale(char *str)
{
	int i;

	i = 0;
	while (!(str[i] >= 'a' && str[i] <= 'z'))
		i++;
	str[i] = str[i] - 32;
	return (str);
}

char	*ft_de_strcapitalize(char *str)
{
	int i;

	i = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9'))
			i++;
		else
		{
			while (!(str[i] >= 'a' && str[i] <= 'z'))
				i++;
			str[i] = str[i] - 32;
			i++;
		}
	}
	return (str);
}

char	*ft_check_capitale(char *str)
{
	int i;

	i = 1;
	while (str[i])
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
				str[i] = str[i] + 32;
			else
				i++;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	ft_minuscule(str);
	ft_first_capitale(str);
	ft_de_strcapitalize(str);
	ft_check_capitale(str);
	return (str);
}
