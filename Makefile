# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/28 11:59:00 by akenji-a          #+#    #+#              #
#    Updated: 2021/06/04 15:51:18 by akenji-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome do projeto
PROJ_NAME=		libft.a

# Compilador
CC=				gcc

# Flags usadas no compilador
CC_FLAGS=		-Wall     \
                -Wextra   \
                -Werror

LIB1=			ar -rcs
LIB2=			ranlib

# Chamando o bin de remove
RM=				/bin/rm -f

# Headers
H_SOURCE=		libft.h

# Sources
C_SOURCE=		ft_memset.c

# Trocar a extensão .c para .o e jogar a lista na variável OBJS
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
