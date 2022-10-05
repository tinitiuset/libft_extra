NAME = libft_extra.a

define HEADER

,--.   ,--.,--.    ,---.  ,--.      ,------.            ,--.
|  |   `--'|  |-. /  .-',-'  '-.    |  .---',--.  ,--.,-'  '-.,--.--. ,--,--.
|  |   ,--.| .-. '|  `-,'-.  .-'    |  `--,  \  `'  / '-.  .-'|  .--'' ,-.  |
|  '--.|  || `-' ||  .-'  |  |,----.|  `---. /  /.  \   |  |  |  |   \ '-'  |
`-----'`--' `---' `--'    `--''----'`------''--'  '--'  `--'  `--'    `--`--'

endef
export HEADER

LIBFT_SRC =	libft/ft_atoi.c			libft/ft_bzero.c \
			libft/ft_calloc.c		libft/ft_isalnum.c \
			libft/ft_isalpha.c		libft/ft_isascii.c \
			libft/ft_isdigit.c		libft/ft_isprint.c \
			libft/ft_itoa.c			libft/ft_memchr.c \
			libft/ft_memcmp.c		libft/ft_memcpy.c \
			libft/ft_memmove.c		libft/ft_memset.c \
			libft/ft_putchar_fd.c	libft/ft_putstr_fd.c \
			libft/ft_putnbr_fd.c	libft/ft_putendl_fd.c \
			libft/ft_split.c		libft/ft_strchr.c \
			libft/ft_strjoin.c		libft/ft_strdup.c \
			libft/ft_striteri.c		libft/ft_strlcat.c \
			libft/ft_strlcpy.c		libft/ft_strlen.c \
			libft/ft_strmapi.c		libft/ft_strncmp.c \
			libft/ft_strnstr.c		libft/ft_strrchr.c \
			libft/ft_substr.c		libft/ft_strtrim.c \
			libft/ft_tolower.c		libft/ft_toupper.c

LIBFT_BONUS =	libft/ft_lstadd_back_bonus.c	libft/ft_lstadd_front_bonus.c \
				libft/ft_lstclear_bonus.c		libft/ft_lstdelone_bonus.c \
				libft/ft_lstlast_bonus.c		libft/ft_lstmap_bonus.c \
				libft/ft_lstiter_bonus.c		libft/ft_lstnew_bonus.c \
				libft/ft_lstsize_bonus.c

FT_PRINTF_SRC =	ft_printf/ft_printf.c	ft_printf/ft_putnbr_base.c\
				ft_printf/ft_long_itoa.c

GNL_SRC =	get_next_line/get_next_line.c	get_next_line/get_next_line_utils.c

GNL_BONUS =	get_next_line/get_next_line_bonus.c	get_next_line/get_next_line_utils_bonus.c

LIBFT_OBJS = $(LIBFT_SRC:%.c=%.o)

LIBFT_OBJS_BONUS = $(LIBFT_BONUS:%.c=%.o)

FT_PRINTF_OBJS = $(FT_PRINTF_SRC:%.c=%.o)

GNL_OBJS = $(GNL_SRC:%.c=%.o)

GNL_OBJS_BONUS = $(GNL_BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(LIBFT_OBJS) $(FT_PRINTF_OBJS) $(GNL_OBJS)
	ar rcs $(NAME) $(LIBFT_OBJS) $(FT_PRINTF_OBJS) $(GNL_OBJS)
	@echo "$$HEADER"
	@echo "Libft + Ft_Printf + GNL Compiled"

clean:
	rm -f $(LIBFT_OBJS) $(LIBFT_OBJS_BONUS) $(FT_PRINTF_OBJS) $(GNL_OBJS) $(GNL_OBJS_BONUS)
	@echo "All .o files removed"

fclean: clean
	rm -f $(NAME)
	@echo "Library removed"

re: fclean $(NAME)

bonus: $(LIBFT_OBJS) $(LIBFT_OBJS_BONUS) $(FT_PRINTF_OBJS) $(GNL_OBJS_BONUS)
	ar rcs $(NAME) $(LIBFT_OBJS) $(LIBFT_OBJS_BONUS) $(FT_PRINTF_OBJS) $(GNL_OBJS_BONUS)
	@echo "Libft(Bonus) + Ft_Printf + GNL(Bonus) Compiled"

.PHONY: all clean fclean re bonus