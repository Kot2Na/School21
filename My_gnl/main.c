/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crycherd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 14:26:29 by crycherd          #+#    #+#             */
/*   Updated: 2019/05/23 16:00:12 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int a;
	int b;
	char *str;
	int p[2];

	if (ac == 2)
	{
/*		str = NULL;
		a = get_next_line(1, NULL);
		printf("%s %d\n", str, a);
		pipe(p);
		write(p[1], "aaa\n\n", 5);
		close(p[1]);
		a = get_next_line(p[0], &str);
		printf("%s %d\n", str, a);
		free(str);
		a = get_next_line(p[0], &str);
		printf("%s %d\n", str, a);
		free(str);
		a = get_next_line(p[0], &str);
		printf("%s %d\n", str, a);
		a = get_next_line(p[0], &str);
		printf("%s %d\n", str, a);
		close(p[0]);*/
		a = open(av[1], O_RDONLY);
		while (get_next_line(a, &str))
		{
			printf("%s\n", str);
			free(str);
		}
		close(a);
	}
	return (0);
}
