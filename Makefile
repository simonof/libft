
NAME	= libft.a

LIST	= ft_memset.c	\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memccpy.c	\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strncmp.c	\
		ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_strnstr.c	\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c 	\
		ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c	\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c

LIST_BONUS = ft_lstnew.c \
			ft_lstadd_front.c

OBJ = $(LIST:.c=.o)

OBJ_BONUS = $(LIST_BONUS:.c=.o)

INCLUDES = libft.h

CFLAGS = -Wall -Werror -Wextra 

CC = gcc

all: $(NAME)

%.o:%.c $(INCLUDES)
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

bonus: $(OBJ) $(OBJ_BONUS)
		ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
clean:	
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re  
