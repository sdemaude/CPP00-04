# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 16:52:25 by sdemaude          #+#    #+#              #
#    Updated: 2024/05/20 12:09:56 by sdemaude         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unnecessary_violence
CXX = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
OBJ = $(SRC:.cpp=.o)

SRC = main.cpp\
	Weapon.cpp\
	HumanA.cpp\
	HumanB.cpp

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
