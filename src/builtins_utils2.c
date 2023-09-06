/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:34:52 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/09/06 16:05:57 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int	free_var(t_tokens **lst)
{
	free((*lst)->content);
	return (1);
}

unsigned char	check_number(char *str)
{
	unsigned long long	n;
	int					s;
	int					i;

	s = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			s = -1;
	n = ft_atoll(&str[i]);
	if ((n > LLONG_MAX && s > 0) || (n - 1 > LLONG_MAX && s < 0))
	{
		s = 1;
		n = 2;
		exit_error(str);
	}
	return ((unsigned char)((long long)(n * s)));
}

int	unset_error(char *str)
{
	char	*temp;

	temp = 0;
	temp = ft_substr(str, 0, 1);
	temp = free_joined(ft_strdup("unset: `"), temp);
	temp = free_joined(temp, ft_strdup(": not a valid identifier"));
	return (1);
}
