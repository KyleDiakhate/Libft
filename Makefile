# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/20 13:59:25 by ltomas-d          #+#    #+#              #
#    Updated: 2026/04/20 16:32:17 by ltomas-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f

SRCS =	ft_isalnum.c \
		ft_isalpha.c \
		ft_isacii.c  \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlcpy.c \
		ft_strlen.c  \
		ft_strncmp.c \
		ft_tolower.c \
		ft.toupper.c \
		ft_memset.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all
