# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbalestr <jbalestr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/11 12:08:17 by jbalestr          #+#    #+#              #
#    Updated: 2019/12/08 17:15:07 by ybuhai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME =	ft_retro
CC =	clang++
FLAGS =	-Wall -Wextra -Werror
LIB =	-lncurses
SDIR =	src/
ODIR =	obj/
IDIR =	includes/
SRC =	main.cpp GameObject.cpp Bullet.cpp Figure.cpp Weapon.cpp Enemy.cpp User.cpp Minigun.cpp Generate.cpp GameBoss.cpp
INC =	GameBoss.hpp GameObject.hpp Bullet.hpp Enemy.hpp Figure.hpp Generate.hpp User.hpp Weapon.hpp header.hpp Minigun.hpp
OBJ =	$(SRC:.cpp=.o)
I =		$(addprefix $(IDIR), $(INC))
S =		$(addprefix $(SDIR), $(SRC))
O =		$(addprefix $(ODIR), $(OBJ))

all: $(NAME)

$(NAME): $(O)
	@$(CC) $(FLAGS) -o $@ $^ -I $(IDIR) $(LIB)

$(ODIR)%.o: $(SDIR)%.cpp $(I)
	@$(CC) $(FLAGS) -c $< -o $@ -I $(IDIR)

$(O): | ./objects
./objects:
	@mkdir $(ODIR)

clean:
	@rm -rf $(ODIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
