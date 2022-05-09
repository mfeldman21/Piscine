/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:40:04 by mfeldman          #+#    #+#             */
/*   Updated: 2022/02/11 10:45:44 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (!((str[a] <= '9') && (str[a] >= '0')))
			return (0);
		a++;
	}
	return (1);
}
