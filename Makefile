# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltomas-d <ltomas-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/20 13:59:25 by ltomas-d          #+#    #+#              #
#    Updated: 2026/05/04 13:37:54 by ltomas-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -f

SRCS =	ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c  \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlcpy.c \
		ft_strlen.c  \
		ft_strncmp.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memset.c  \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_lstnew.c \
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
		ar rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all
