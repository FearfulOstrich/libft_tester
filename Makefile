SRCS	=	printer.c main_test.c test_isalpha.c test_isdigit.c test_isalnum.c test_isascii.c test_isprint.c test_strlen.c test_toupper.c test_tolower.c test_strchr.c test_strrchr.c test_strncmp.c test_atoi.c test_memset.c test_memcpy.c test_memmove.c test_memchr.c test_memcmp.c test_bzero.c test_strnstr.c test_strlcat.c test_strlcpy.c test_strdup.c test_calloc.c test_substr.c test_strjoin.c test_strtrim.c test_split.c test_itoa.c test_strmapi.c test_striteri.c test_putchar.c test_putstr.c test_putendl.c test_putnbr.c test_lstnew.c test_lstadd_front.c test_lstsize.c test_lstlast.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	test

CC		=	clang

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

INCL_DIR=	includes

LIB_DIR	=	../libft

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCL_DIR} -I ${LIB_DIR}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} -L${LIB_DIR} -lft

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
