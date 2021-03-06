/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_wrd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 17:52:50 by crycherd          #+#    #+#             */
/*   Updated: 2019/05/24 17:53:58 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_wrd(char const *s, char c)
{
	size_t i;
	size_t result;

	result = 0;
	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			while (s[i] == c)
				i++;
			if (s[i] != '\0')
				result++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (result);
}
