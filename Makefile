# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/28 11:59:00 by akenji-a          #+#    #+#              #
#    Updated: 2021/06/27 14:58:53 by akenji-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROJ_NAME=		libft.a

CC=				gcc

CC_FLAGS=		-Wall     \
                -Wextra   \
                -Werror

LIB1=			ar -rcs
LIB2=			ranlib

RM=				/bin/rm -f

H_SOURCE=		libft.h

C_SOURCE=		ft_atoi.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_itoa.c\
				ft_memccpy.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_putchar_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_putstr_fd.c\
				ft_split.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_strjoin.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strmapi.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_strtrim.c\
				ft_substr.c\
				ft_tolower.c\
				ft_toupper.c

OBJS=			$(C_SOURCE:.c=.o)

all:			$(PROJ_NAME)

$(PROJ_NAME):	$(OBJS) $(H_SOURCE)
				$(LIB1) $(PROJ_NAME) $(OBJS)
				$(LIB2) $(PROJ_NAME)

.c.o:			$(CC) $(CC_FLAGS) -I$(H_SOURCE) -c $< -o $(<:.c=.o)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(PROJ_NAME)

re:				fclean all

.PHONY:			all clean fclean re
