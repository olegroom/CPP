NAME = proga

SRCS = main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	clang++ -g $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re