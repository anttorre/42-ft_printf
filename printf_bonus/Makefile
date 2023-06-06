NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

LIB = ar rcs

LIBFT_PATH = ./libft

LIBFT = $(LIBFT_PATH)/libft.a

FILES =	ft_printf.c ft_print_char_string.c ft_print_d_i_u.c ft_print_hex_ptr.c struct.c write_flags.c

OBJS = $(FILES:.c=.o)

$(NAME) :	$(OBJS) $(LIBFT)
			cp $(LIBFT) $(NAME)
			$(LIB) $(NAME) $(OBJS)

$(LIBFT):
			make -C $(LIBFT_PATH)

all : $(NAME)

bonus : all

clean:
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJS)

fclean:
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME) $(OBJS)

re : fclean all

.PHONY : all re fclean clean