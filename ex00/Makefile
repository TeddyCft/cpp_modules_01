#-variables------------------------------------------------------------#

MAKEFLAGS += --no-print-directory
QUIET = 	

NAME = 		megaphone
INCLUDES =	./includes
CC = $(QUIET) c++
FLAGS = -Wall -Wextra -Werror -std=c++98

FILES =		megaphone \


SRC_DIR		= 	src/
SRC_FILES	=	$(addsuffix .cpp, $(FILES))
SRC 		=	$(addprefix $(SRC_DIR), $(SRC_FILES))


#----------------------------------------------------------------------#

all : 			$(NAME)
				@ echo "\033[0;32mTCoeffet's" $(NAME) "is ready !\033[0m" 

#-compil---------------------------------------------------------------#

$(NAME) :		$(OBJ_DIR) $(OBJ)
				$(CC) $(FLAGS) -I $(INCLUDES) $(SRC) -o $(NAME)


#-rules----------------------------------------------------------------#

clean :			
				$(QUIET) rm -rf $(OBJ_DIR)
				
fclean : 		clean
				$(QUIET) rm -f $(NAME)
				
re : 			fclean all

.PHONY : all clean fclean re