/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwing <cwing@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 23:59:43 by cwing             #+#    #+#             */
/*   Updated: 2019/09/10 03:31:38 by cwing            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr(char const *s)
{
	size_t		iter;

	if (!s)
		return ;
	iter = 0;
	while (s[iter])
	{
		ft_putchar(s[iter]);
		iter++;
	}
}