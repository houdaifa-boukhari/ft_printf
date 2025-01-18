NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
head = ft_printf.h
SRC = ft_printf.c putchar.c puthexa.c putnbr.c putstr.c tooll.c
OBJS = ft_printf.o putchar.o puthexa.o putnbr.o putstr.o tooll.o
RM = rm -f

all : $(NAME)
$(NAME) :  $(OBJS)
	@ar rc $(NAME) $(OBJS)
%.o: %.c $(head)
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	@$(RM) $(OBJS)
fclean : clean
	@$(RM) $(NAME)
re : fclean all
