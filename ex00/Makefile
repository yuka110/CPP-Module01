# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yitoh <yitoh@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2024/02/03 15:18:32 by yitoh         #+#    #+#                  #
#    Updated: 2024/04/30 13:45:43 by yitoh         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=BrainzzZ
CC		=c++
CFLAGS	=-Wall -Werror -Wextra -std=c++11 #-g -fsanitize=thread
RM		=rm -f
SRC		=Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJ		=$(SRC:%.cpp=obj/%.o)

all:	$(NAME)


$(OBJ):		$(SRC) Zombie.hpp
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