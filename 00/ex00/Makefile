# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/20 18:01:44 by natalierauh       #+#    #+#              #
#    Updated: 2025/02/22 15:16:38 by natalierauh      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.c=.o)

# $(objects): %.o: %.c
# 	$(CCX)

# runs all the targets
all: $(NAME)

name: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) $^ -o $@

%.o: %.c
	$(CXX) $(CXXFLAGS) $(OBJ) $^ -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
