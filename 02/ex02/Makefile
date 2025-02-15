# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frankgar <frankgar@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 17:11:27 by frankgar          #+#    #+#              #
#    Updated: 2025/02/06 12:12:48 by frankgar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

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

$(NAME): $(OBJ) Makefile
	$(CPP) $(FLAGS) $(OBJ) -o $@ $(INCLUDES)
	sleep 1
	clear
	echo "[ $(NAME) ] Created"
	sleep 1
	clear

clean:
	rm -rf $(DIR_OBJ)
	echo "DEPENDENCIES Erased"
	sleep 1
	clear

fclean:
	rm -rf $(DIR_OBJ)
	rm -rf $(NAME)
	echo "FULL CLEAN Made"
	sleep 1
	clear

re: fclean all

.PHONY: fclean all clean re dir
.SILENT:

