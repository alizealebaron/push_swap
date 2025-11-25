# Variables importantes
CC = cc
RM = rm -rf
NAME = ${NAME_MAIN}.a
CFLAGS = -Wall -Werror -Wextra
NAME_MAIN = push_swap

# Ressources de l'exercice

LIB_SRCS = push_swap.c                       \
		   src/check_error.c                 \
		   src/push_swap_utils.c             \
		   src/init_stack.c                  \
		   src/stack_utils.c                 \
		   src/sort_utils.c                  \
		   src/sort_stack.c                  \
		   src/sort_option/sort_push.c       \
		   src/sort_option/sort_swap.c       \
		   src/sort_option/sort_rotate.c     \
		   src/sort_option/sort_rev_rotate.c \

LIB_OBJS =  $(LIB_SRCS:.c=.o)

# Aller chercher la libft

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

# Règles du make

all: $(LIBFT) $(NAME)

$(NAME): $(LIB_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME_MAIN) $^ -g3

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(LIB_OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME_MAIN)

re: fclean all

.PHONY: fclean all clean re

# Règle de la libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
