NAME = libft.a

SRCS = ft_bzero.c \
ft_memcpy.c \
ft_memset.c \
ft_strncmp.c \
ft_strlen.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strchr.c \
ft_strrchr.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_calloc.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
