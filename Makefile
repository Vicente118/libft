NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Wextra -Werror

SRCS =  ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
		ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c\
		ft_strlen.c

OBJS = $(SRCS:.c=.o)

ARRC = ar rc

RANLIB = ranlib

RM = rm 





$(NAME) : $(OBJS)
	$(CC) $(CCFLAGS) $(SRCS)
	$(ARRC) $(NAME) $(OBJS)
	$(RANLIB) $(NAME)

all : $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
