/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouk <hel-bouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:06:35 by hel-bouk          #+#    #+#             */
/*   Updated: 2023/12/30 14:43:12 by hel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		putnbr_(long nb);
int		putchar_(char c);
int		strlen_(char *str);
int		putstr_(char *str);
int		puthexa_(unsigned long nb, char format);
int		putaddress_(void *ptr);
int		ft_printf(const char *format, ...);
char	*ft_strchr(const char *s, int c);

#endif
