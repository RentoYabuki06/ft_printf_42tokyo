/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:51:00 by yabukirento       #+#    #+#             */
/*   Updated: 2024/05/03 16:25:15 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int a)
{
	int		count;
	char	*tmp;

	count = 0;
	tmp = ft_itoa(a);
	if (!tmp)
		return (-1);
	count = ft_printstr(tmp);
	free(tmp);
	return (count);
}
