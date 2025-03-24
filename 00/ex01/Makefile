# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: natalierauh <natalierauh@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/22 15:06:40 by natalierauh       #+#    #+#              #
#    Updated: 2025/03/24 11:10:41 by natalierauh      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CCX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

NAME = pb

SRC = Phonebook.cpp Contact.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CCX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CCX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
