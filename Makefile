NAME				= push_swap

LIBFT				= ./libft_goolivei/libft.a
HEADER				= header/
SRC_DIR				= srcs
OBJ_DIR				= obj/

CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -I
RM					= rm -f

SRCS		=	$(SRC_DIR)/push.c \
						$(SRC_DIR)/rotate.c \
						$(SRC_DIR)/sort_almost_everything.c \
						$(SRC_DIR)/sort_three.c \
						$(SRC_DIR)/swap.c \
						$(SRC_DIR)/error_handler.c \
						$(SRC_DIR)/init_a_to_b.c \
						$(SRC_DIR)/init_b_to_a.c \
						$(SRC_DIR)/push_swap.c \
						$(SRC_DIR)/stack_start.c \
						$(SRC_DIR)/rev_rotate.c \
						$(SRC_DIR)/stack_utils.c 

OBJ 				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

start:				
					@make all

$(LIBFT):
					@make -C ./libft_goolivei

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)
					@$(CC) $(CFLAGS) $(HEADER) $(OBJ) $(LIBFT) -o $(NAME)

$(OBJ_DIR)%.o:		$(SRC_DIR)%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./libft_goolivei

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT)

re: 				fclean all

.PHONY: 			start all clean fclean re
