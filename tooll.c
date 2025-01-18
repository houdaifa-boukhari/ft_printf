/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tooll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 21:28:03 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/25 15:05:47 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

int	strlen_(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
