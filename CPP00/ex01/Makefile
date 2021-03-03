NAME = PhoneBook
SRCS = phoneBook.cpp ClassContact.cpp

OBJS = ${SRCS:.cpp=.o}

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all : 		${NAME}

${NAME}:	${OBJS}
			clang++  ${CFLAGS} -o ${NAME} ${SRCS}

clean :
			${RM} ${OBJS} ${BONUS}

fclean :	clean
			${RM} ${NAME}

re :		fclean all