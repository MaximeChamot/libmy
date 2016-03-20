NAME		= libmy.a

SRCS		= my_putchar.c \
		my_putstr.c \
		my_putnbr.c \
		my_putnbr_base.c \
		my_getnbr.c \
		my_getnbr_base.c \
		my_strlen.c \
		my_swap_int.c \
		my_swap_str.c \
		my_strcpy.c \
		my_strncpy.c \
		my_revstr.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strstr.c \
		my_strpos.c \
		my_strchr.c \
		my_strdup.c \
		my_strndup.c \
		my_strcat.c \
		my_strncat.c \
		my_str_isalpha.c \
		my_str_isnum.c \
		my_str_islower.c \
		my_str_isupper.c \
		my_str_isprintable.c \
		my_strupcase.c \
		my_strlowcase.c \
		my_sort_int_tab.c \
		my_show_int_tab.c \
		my_sort_wordtab.c \
		my_show_wordtab.c \
		my_str_to_wordtab.c \
		my_free_wordtab.c

OBJS		= $(SRCS:.c=.o)

AR_RC		= ar rc

RANLIB		= ranlib

RM		= rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
		$(AR_RC) -o $(NAME) $(OBJS)
		$(RANLIB) $(NAME)

clean:
		$(RM) $(OBJS)

fclean: 	clean
		$(RM) $(NAME)

re: 		fclean all
