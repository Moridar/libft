# Makefile

# Directories
OBJ_DIR = objs/

# List of source files
SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

# Libary name
NAME = libft.a 

# CC Flags
CFlags = -Wall -Wextra -Werror

# Default rule
all: $(NAME)
# Create o. files in obj folder and archive into .a file.
$(NAME):
	cc $(CFLAGS) -c $(SRCS)
	mkdir -p $(OBJ_DIR)
	mv $(OBJS) $(OBJ_DIR)
	ar rc $(NAME) $(OBJS:%.o=$(OBJ_DIR)%.o)
# Clean up
clean: 
	rm -rf $(OBJ_DIR)
# Full clean up
fclean: clean
	rm -rf $(NAME)
# Clean up and re-create
re: fclean all	
	

