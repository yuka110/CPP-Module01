# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yitoh <yitoh@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2024/04/30 16:22:11 by yitoh         #+#    #+#                  #
#    Updated: 2024/05/07 12:52:54 by yitoh         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	=Files
CC		=c++
CFLAGS	=-Wall -Werror -Wextra -std=c++11 -g -fsanitize=thread
RM		=rm -f
SRC		=main.cpp Replace.cpp
OBJ		=$(SRC:%.cpp=obj/%.o)

all:	$(NAME)


$(OBJ):		$(SRC)
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