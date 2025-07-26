NAME = rush-02
SRC = main.c \
      parser.c \
      dict_utils.c \
      number_to_words.c \
      string_utils.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
CC = cc
all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
