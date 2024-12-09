/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:11:19 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/03 13:24:30 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i ++;
	}
}

// void    test(unsigned int n, char *c)
// {
	// *c = 'k';
// }

// int     main(void)
// {
//     char    string[] = "Hello World!";
//     printf("%s\n", string);
//     ft_striteri(string, test);
//     printf("%s\n", string);
// }