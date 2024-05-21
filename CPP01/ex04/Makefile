# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 16:52:25 by sdemaude          #+#    #+#              #
#    Updated: 2024/05/20 15:09:53 by sdemaude         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed_is_for_loser 
CXX = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
OBJ = $(SRC:.cpp=.o)

SRC = main.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

c: all clean

.PHONY: all clean fclean re bonus c
