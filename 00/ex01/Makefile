# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 17:11:27 by frankgar          #+#    #+#              #
#    Updated: 2025/01/28 12:12:57 by frankgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FLAGS = -Wall -Werror -Wextra -std=c++98

CPP = c++

SRC = main.cpp


INCLUDES = -I ./inc/
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
	$(CPP) $(FLAGS) -MMD -c $< -o $@ $(INCLUDES)
	echo "Compiled $<"
	sleep 1
	clear

$(NAME): $(OBJ) Makefile
	$(CPP) $(FLAGS) $(OBJ) -o $@ $(INCLUDES)
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
