/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:07:55 by isahmed           #+#    #+#             */
/*   Updated: 2024/12/19 12:34:32 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif 

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h> 

struct s_node
{
	char			*text;
	struct s_node	*next;
};

int		ft_strchri(const char *s, int c, int start);
char	*get_next_line(int fd);
void	print_ll(struct s_node *start);
void	append_node(struct s_node **lst, char *buffer);
int		check_for_nl(struct s_node **lst);
int		check_for_no_nl(struct s_node **lst);
int		create_ll(int fd, struct s_node **lst);
void	clean_ll(struct s_node **lst, struct s_node *current, int i);
char	*get_line(struct s_node **lst, int line_len);
#endif