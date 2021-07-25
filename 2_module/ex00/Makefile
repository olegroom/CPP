NAME = proga

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re