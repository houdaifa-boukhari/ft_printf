/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:31:18 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/25 15:15:58 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putstr_(char *str)
{
	if (str)
		return (write(STDOUT_FILENO, str, strlen_(str)));
	return (putstr_("(null)"));
}
