/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkivipur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:21:48 by mkivipur          #+#    #+#             */
/*   Updated: 2020/01/06 14:36:10 by anikkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		hash_check(char *nnstring)
{
	int i;
	int count;
	int len;

	i = 0;
	count = 0;
	len = ft_strlen(nnstring);
	while (i <= len)
	{
		if (nnstring[i] == '#')
			count++;
		i++;
		if ((i % 16) == 0)
		{
			if ((count == 0 || count != 4))
				return (0);
			count = 0;
		}
	}
	return (1);
}
