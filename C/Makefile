NAME := DrQuineC

CC := gcc
CFLAGS := -Wall -Wextra -Werror

COLEEN := coleen
COLEEN_SRCS := Coleen.c
COLEEN_OBJS := $(COLEEN_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(COLEEN)

$(COLEEN): $(COLEEN_OBJS)
	$(CC) -o $(COLEEN) $(COLEEN_OBJS)

.PHONY:clean
clean:
	rm -f $(COLEEN_OBJS)

.PHONY:fclean
fclean: clean
	rm -f $(COLEEN)

.PHONY:re
re: fclean all
