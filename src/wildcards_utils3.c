/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wildcards_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 13:45:38 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/09/01 13:50:01 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int	*pre_increment(int *i)
{
	(*i)++;
	return (i);
}

void	increment_both(int *i, int *j)
{
	(*i)++;
	(*j)++;
}
