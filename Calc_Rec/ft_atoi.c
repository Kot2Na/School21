/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 19:05:41 by crycherd          #+#    #+#             */
/*   Updated: 2019/02/17 21:25:34 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tr_calc.h"

int	ft_atoi(char *str)
{
	int k;
	int n;

	k = 0;
	n = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n')
		str++;
	while (*str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '-')
		n = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
		{
			return (k * n);
		}
		k = k * 10 + *str - '0';
		str++;
	}
	return (k * n);
}

void ft_itoa(int value, char *s)
{
	char tmp[20];
	unsigned v;
	int i;
	char *tp;
	int sign;

	tp = tmp;
	sign = 0;
	if (value < 0)
	{
		v = -value;
		sign = 1;
	}
	else
		v = value;
	while (v || tp == tmp)
	{
		i = v % 10;
		v /= 10;
		*tp++ = i + '0';
	}
	if (sign)
		*s++ = '-';
	while (tp > tmp)
		*s++ = *--tp;
}
