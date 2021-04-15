NAME = a.out
SRCS = main.cpp Peon.cpp Sorcerer.cpp Victim.cpp Peasant.cpp

OBJS = ${SRCS:.cpp=.o}

CXX = clang++

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all : 		${NAME}

${NAME}:	${OBJS}
			clang++ -std=c++98 -o ${NAME} ${CFLAGS} ${SRCS}

clean :		
			${RM} ${OBJS} ${BONUS}

fclean :	clean
			${RM} ${NAME}

re :		fclean all