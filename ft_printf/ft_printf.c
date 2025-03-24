/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:53:13 by ishaaq            #+#    #+#             */
/*   Updated: 2024/12/24 16:33:05 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	validate(char c)
{
	int		i;
	char	*set;

	i = 0;
	set = "cspdiuxX%\0";
	while (set[i] != '\0')
		if (c == set[i++] && c != '\0')
			return (i - 1);
	return (-1);
}

int	ft_format(va_list args, char c, int chars)
{
	int	characters;

	characters = chars;
	if (c == 'c')
		ft_putchar((char) va_arg(args, int), &characters);
	else if (c == 's')
		ft_putstr((char *) va_arg(args, char *), &characters);
	else if (c == 'p')
		ft_putptr((unsigned long *) va_arg(args, void *), &characters);
	else if (c == 'd' || c == 'i')
		ft_putint(va_arg(args, int), &characters);
	else if (c == 'u')
		ft_putuint(va_arg(args, unsigned long), &characters);
	else if (c == 'x')
		ft_itoh(va_arg(args, unsigned int), 0, &characters);
	else if (c == 'X')
		ft_itoh(va_arg(args, unsigned int), 1, &characters);
	else if (c == '%')
		ft_putchar('%', &characters);
	return (characters);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		characters;

	i = 0;
	characters = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && validate(format[i + 1]) >= 0)
		{
			characters = ft_format(args, format[i + 1], characters);
			i += 2;
		}
		else
			ft_putchar(format[i++], &characters);
	}
	va_end(args);
	return (characters);
}

// int	main(void)
// {
// 	char *s = "Ishaaq Ahmed";
// 	int num1 = ft_printf("Hello world!");
// 	printf("\n");
// 	int num2 = printf("Hello world!");

// 	printf("\n");  

// 	printf("ft_printf: (%d)", num1);
// 	printf("printf: (%d)", num2);

// 	// printf("%d", ft_printf("%c", 'k'));
// }