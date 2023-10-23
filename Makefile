# Makefile

# Directories
SRC_DIR = srcs
INC_DIR = includes

# List of source files
SRCS = $(SRC_DIR)/ft_putchar.c \
	   $(SRC_DIR)/ft_swap.c \
	   $(SRC_DIR)/ft_putstr.c \
	   $(SRC_DIR)/ft_strlen.c \
	   $(SRC_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
OBJ = ft_putchar.o \
	  ft_swap.o \
	  ft_putstr.o \
	  ft_strlen.o \
	  ft_strcmp.o
# Libary name
NAME = libft.a 

$(NAME): all
# Default rule
all:
	cc -Wall -Wextra -Werror -I$(INC_DIR) -c $(SRCS)
	mv $(OBJ) $(SRC_DIR)
	ar rc $(NAME) $(OBJS)

# Clean up and re-create
re: fclean all	
	
# Full clean up
fclean: clean
	rm -rf $(NAME)
	
# Clean up
clean:
	rm -rf $(OBJS) 
