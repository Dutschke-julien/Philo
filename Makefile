# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 12:38:39 by jdutschk          #+#    #+#              #
#    Updated: 2022/08/29 17:08:17 by jdutschk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= main.c

SRCS	+= error_manager.c  utils.c  ft_init_rules.c start.c

OBJS	= $(SRCS:.c=.o)

NAME	= philo

CC	= gcc

FLAGS	= -Wall -Wextra -Werror

HEADER	= philo.h




all:	$(NAME)

$(NAME): $(OBJS)
	$(CC)  $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME) 

re: fclean all

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $<  -o $(<:.c=.o)