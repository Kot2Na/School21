/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 20:06:40 by sselusa           #+#    #+#             */
/*   Updated: 2019/02/12 20:26:22 by crycherd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# define SIDE_LENGTH 9
# define RESULT_FAIL 0
# define RESULT_OK 1
# define RESULT_DONE 2

typedef struct	s_cell {
	int x;
	int y;
	int posibs;
	int choices[SIDE_LENGTH];
}				t_cell;

typedef struct	s_point {
	int x;
	int y;
}				t_point;

#endif
