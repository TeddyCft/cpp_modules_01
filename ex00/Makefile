#-variables------------------------------------------------------------#

MAKEFLAGS += --no-print-directory
QUIET = 	

NAME = 		ex00
INCLUDES =	./includes
CC = $(QUIET) c++
FLAGS = -Wall -Wextra -Werror -std=c++98

FILES =		main \
			newZombie \
			randomChump \
			class/Zombie

SRC_DIR		= 	src/
SRC_FILES	=	$(addsuffix .cpp, $(FILES))
SRC 		=	$(addprefix $(SRC_DIR), $(SRC_FILES))

OBJ_DIR		= 	obj/
OBJ			=	$(patsubst $(SRC_DIR)%.cpp, $(OBJ_DIR)%.o, $(SRC))

#----------------------------------------------------------------------#

all : 			$(NAME)
				@ echo "\033[0;32mTCoeffet's" $(NAME) "is ready !\033[0m" 

#-compil---------------------------------------------------------------#

$(NAME) :		$(OBJ_DIR) $(OBJ)
				$(CC) $(FLAGS) -I $(INCLUDES) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
				$(CC) $(FLAGS) -I $(INCLUDES) -c $< -o $@

$(OBJ_DIR) :
				$(QUIET) mkdir -p $(OBJ_DIR)
				$(QUIET) mkdir -p $(OBJ_DIR)/class

#-rules----------------------------------------------------------------#

clean :			
				$(QUIET) rm -rf $(OBJ_DIR)
				
fclean : 		clean
				$(QUIET) rm -f $(NAME)
				
re : 			fclean all

.PHONY : all clean fclean re