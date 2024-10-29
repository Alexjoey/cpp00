# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlaverge <tlaverge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 11:58:06 by amylle            #+#    #+#              #
#    Updated: 2024/10/21 08:48:24 by amylle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR	= ./src
INC_DIR	= ./inc
OBJ_DIR	= ./obj

SRCS	= ./megaphone.cpp
OBJS	= $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
CC		= c++
CFLAGS	= -Wextra -Wall -Werror -std=c++98
INCLUDE	=
RM		= rm -rf

NAME	= megaphone

#---------------------------Messages--------------------------------------------

BOLD_PURPLE	=	\033[1;35m

BOLD_CYAN	=	\033[1;36m

BOLD_YELLOW	=	\033[1;33m

NO_COLOR	=	\033[0m

all:	$(NAME)

$(NAME):
				@echo Compiling $(NAME)
				$(CC) $(CFLAGS) $(SRCS) $(INCLUDE) -o $(NAME)

re:			fclean all

clean:	
				@echo "$(BOLD_YELLOW)Removing all object files and directories"
				$(RM) $(OBJ_DIR)

fclean:
				@echo "$(BOLD_YELLOW)Removing binaries"
				$(RM) $(NAME) $(OBJ_DIR)

re:			fclean all
