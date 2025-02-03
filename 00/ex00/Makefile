# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 17:11:27 by frankgar          #+#    #+#              #
#    Updated: 2025/01/18 19:23:34 by frankgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Werror -Wextra -std=c++98

CPP = c++

SRC = megaphone.cpp

DIR_SRC = ./src
DIR_OBJ = $(DIR_SRC)/obj

OBJ = $(addprefix $(DIR_OBJ)/, $(SRC:.cpp=.o))
DEP = $(addprefix $(DIR_OBJ)/, $(SRC:.cpp=.d))

all: dir $(NAME)

-include $(DEP)

dir:
	clear
	mkdir -p $(DIR_OBJ)

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.cpp Makefile
	$(CPP) $(FLAGS) -MMD -c $< -o $@
	echo "Compiled $<"
	sleep 1
	clear

$(NAME): $(OBJ) Makefile
	$(CPP) $(FLAGS) $(OBJ) -o $@
	echo "[ $(NAME) ] Created"

clean:
	rm -rf $(DIR_OBJ)
	echo "DEPENDENCIES Erased"
	echo "$(OBJ)"

fclean: clean
	rm -rf $(NAME)
	echo "FULL CLEAN Made"

re: fclean all

.PHONY: fclean all clean re dir
.SILENT:
