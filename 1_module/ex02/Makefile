NAME = execute

SRC = Account.cpp tests.cpp

OBJS = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re