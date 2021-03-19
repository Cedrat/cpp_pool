NAME = a.out
SRCS = FragTrap.cpp main.cpp ScavTrap.cpp little_games.cpp ClapTrap.cpp

OBJS = ${SRCS:.cpp=.o}

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