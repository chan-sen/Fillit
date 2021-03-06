/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 21:11:47 by chansen           #+#    #+#             */
/*   Updated: 2016/11/08 21:11:49 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	err(char *s)
{
	ft_putendl(s);
	exit(42);
}

void	ft_set3to0(int *a, int *b, int *c)
{
	*a = 0;
	*b = 0;
	*c = 0;
}

void	reset(int c, int r, char **board, t_tetri **lst)
{
	t_tetri	*tet;
	int		x;
	int		y;
	int		j;

	tet = *lst;
	j = 0;
	while (j < 4)
	{
		x = tet->x[j];
		y = tet->y[j];
		board[r + y][c + x] = '.';
		j++;
	}
}
