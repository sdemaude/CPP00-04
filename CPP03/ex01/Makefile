# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdemaude <sdemaude@student.42lehavre.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 16:52:25 by sdemaude          #+#    #+#              #
#    Updated: 2024/07/20 13:50:22 by sdemaude         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap 
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -std=c++98
OBJ = $(SRC:.cpp=.o)

SRC = main.cpp\
      	ClapTrap.cpp\
		ScavTrap.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

c: all clean

.PHONY: all clean fclean re bonus c
