/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_std_lib.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 20:25:06 by crycherd          #+#    #+#             */
/*   Updated: 2019/04/11 04:39:03 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#include "includes/operator.h"

void	ft_putnbr(int nb)
{
	if (nb >= -2147483648 && nb <= 2147483647)
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		if (-2147483648 == nb)
		{
			ft_putchar('2');
			nb = 147483648;
		}
		while (nb / 10 > 0)
			ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);		
	}
	else
		ft_putchar('0');
}
