# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 14:05:07 by khanhayf          #+#    #+#              #
#    Updated: 2024/02/27 14:42:42 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Whatever
CC = c++
FLAGSCPP = -Wall -Wextra -Werror -std=c++98
HEAD = whatever.hpp
SRC = main.cpp
OBJ = main.o
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGSCPP) $(OBJ) -o $@
	
%.o : %.cpp $(HEAD)
	$(CC) $(FLAGSCPP) -c $<

clean :
	$(RM) $(OBJ)

fclean :clean
	$(RM) $(NAME)
	
re : fclean all