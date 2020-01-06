/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_support.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkivipur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 09:16:23 by mkivipur          #+#    #+#             */
/*   Updated: 2020/01/06 10:19:06 by mkivipur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list		*reset_tmp(t_list **begin_list, t_list **tmp, int *j)
{
	*tmp = *(begin_list);
	*j = 0;
	return (*tmp);
}

int			one_tetri_check(char *buff)
{
	if (!((buff[4] == '\n' && buff[9] == '\n' && buff[14] == '\n'
				&& buff[19] == '\n')))
	{
		free(buff);
		return (0);
	}
	return (1);
}

int			new_line_check2(char *buff, int count, int bcount)
{
	count = charcount(buff, '\n');
	if (!(((bcount * 5) - 1) == count))
	{
		free(buff);
		return (0);
	}
	return (1);
}

int			new_line_check3(char *buff, int x)
{
	char	*tmp;

	if (!(tmp = ft_strsub(buff, 0, ft_strlen(buff))))
		return (0);
	while (x > 0)
	{
		if (x > 1)
		{
			if (!((tmp[4] == '\n' && tmp[9] == '\n' && tmp[14] == '\n'
							&& tmp[19] == '\n' && tmp[20] == '\n')))
			{
				free(tmp);
				return (0);
			}
		}
		else
		{
			if (!(one_tetri_check(tmp)))
				return (0);
		}
		ft_strsubm(tmp, tmp, 21, ft_strlen(tmp));
		x--;
	}
	free(tmp);
	return (1);
}

int			validate_all(char *buff)
{
	if (!(new_line_check(buff)))
		return (0);
	if (!(check_nnstring(create_nnstring(buff))))
	{
		free(buff);
		return (0);
	}
	return (1);
}
