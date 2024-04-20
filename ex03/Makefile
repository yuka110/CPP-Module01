# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yitoh <yitoh@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/06 20:52:15 by yitoh         #+#    #+#                  #
#    Updated: 2024/04/20 17:20:15 by yitoh         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=Weapons
CC		=c++
CFLAGS	=-Wall -Werror -Wextra #-std=c++98 #-g -fsanitize=thread
RM		=rm -f
SRC		=main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ		=$(SRC:%.cpp=obj/%.o)

all:	$(NAME)


$(OBJ):		$(SRC) Weapon.hpp
				@mkdir -p $(dir $@)
				@printf "\e[1;34mBuilding $@\n\e[0;00m"
				@$(CC) $(CFLAGS) -c $(@:obj/%.o=%.cpp) -o $@

$(NAME):	$(OBJ)
				@printf "\e[1;36mCompiling $@\n\e[0;00m"
				@$(CC) $(CFLAGS) $^ -o $@
				@printf "\e[1;32mDone\e[0;00m\n"

clean:
				@$(RM) -r obj
				@printf "\e[1;35mCleaned Object Files\n\e[0;00m"

fclean:		clean
				@$(RM) $(NAME)
				@printf "\e[1;31mCleaned Executables\n\e[0;00m"

re:			fclean all

.PHONY:		all clean fclean re