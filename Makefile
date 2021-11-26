SRCS	=	main_test.c test_isalpha.c test_isdigit.c test_isalnum.c test_isascii.c test_isprint.c test_strlen.c test_toupper.c test_tolower.c test_strchr.c test_strrchr.c test_strncmp.c test_atoi.c test_memset.c test_memcpy.c test_memmove.c test_memchr.c test_memcmp.c test_bzero.c test_strnstr.c

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
