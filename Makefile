# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrossouw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/29 11:05:19 by hrossouw          #+#    #+#              #
#    Updated: 2018/06/13 13:14:06 by hrossouw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_mem{alloc,ccpy,chr,cmp,cpy,del,move,set}.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_is{alpha,print,alnum,ascii,digit}.c \
		ft_str{iter,iteri}.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_str{map,mapi}.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnequ.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strtrim.c \
		ft_to{lower,upper}.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_put{char,str,endl,nbr}.c \
		ft_put{char,str,endl,nbr}_fd.c \
		ft_amount_of_num.c \
		ft_amount_of_words.c \
		ft_min.c \
		ft_memrchrn.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $? $(SRC)
	@ar rc $(NAME) $? $(OBJ)
	@ranlib $(NAME)
	@echo "Created!"

clean:
	@/bin/rm -rf $(OBJ)
	@echo "Object files cleaned!"

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "All compiled files cleaned!"

re: fclean all

.PHONY: all clean fclean re
