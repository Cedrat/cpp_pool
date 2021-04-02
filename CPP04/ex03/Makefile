NAME = a.out
SRCS = main.cpp AMateria.cpp Ice.cpp Character.cpp Cure.cpp

OBJS = ${SRCS:.cpp=.o}

CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address

RM = rm -f

all : 		${NAME}

${NAME}:	${OBJS}
			clang++ -std=c++98 -o ${NAME} ${CFLAGS} ${SRCS}

clean :		
			${RM} ${OBJS} ${BONUS}

fclean :	clean
			${RM} a.out

re :		fclean all