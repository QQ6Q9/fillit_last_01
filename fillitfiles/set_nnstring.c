/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_nnstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikkane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:21:40 by anikkane          #+#    #+#             */
/*   Updated: 2020/01/06 14:36:43 by anikkane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		*set_nnstring(char *nnstring, int start, int len)
{
	char *tmp;

	tmp = ft_strsub(nnstring, start, len);
	return (tmp);
}
