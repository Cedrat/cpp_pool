NAME = a.out
SRCS = main.cpp AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp Enemy.cpp SuperMutant.cpp RadScorpion.cpp Character.cpp AquaThrower.cpp Candle.cpp

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
			${RM} a.out

re :		fclean all
