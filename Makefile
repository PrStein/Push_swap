NAME = push_swap

CC = gcc

FLAGS    = -Wall -Wextra -Werror

DEL = /bin/rm -f

PATH_LIBFT	= ./libft/

SRCS =		push_swap.c \
			swap_utils.c \
			swap1.c \
			init_tab.c \

BONUS =

SRCS_O    = ${SRCS:.c=.o}
BONUS_O        = ${BONUS:.c=.o}
all: $(NAME)

LIBC    = ar -rcs

%.o: %.c
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${SRCS_O}
			${LIBC} $(NAME) $(SRCS_O)

bonus: $(SRCS_O) $(BONUS_O)
		$(LIBC) $(NAME) $(SRCS_O) $(BONUS_O)

fclean: clean
		$(DEL) $(NAME)

clean:
		$(DEL) $(SRCS_O) $(BONUS_O)

re: fclean all
