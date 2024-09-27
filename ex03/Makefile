NAME 		= fixed
CC 			= c++
CFLAGS 		= -Wall -Wextra -Werror -std=c++98

SRCS 		= $(shell find -name "*.cpp")
OBJS 		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
