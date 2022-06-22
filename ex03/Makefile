SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

DIRECTORYS = srcs/

SRCSD =	$(addprefix ${DIRECTORYS}, $(SRCS))

EFLAGS = -Wall -Wextra -Werror

CLFAGS = -std=c++98

OBJS =	${SRCSD:.cpp=.o}

NAME   = war

%.o: %.cpp ${HEADER}
	clang++ -c ${CFLAGS} ${EFLAGS} -o $@ $< ${INCLUD}

INCLUD = -I./include

${NAME}: ${OBJS}
	clang++ $(EFLAGS) ${CFLAGS} -o $(NAME) ${INCLUD} ${SRCSD}

all:	${NAME}

clean:
		rm  -f ${OBJS}

fclean:	clean
		rm  -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re