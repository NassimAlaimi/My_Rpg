##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## lib makefile
##

SRC		=		libC/my_getnbr.c					\
				libC/my_atoi.c						\
				libC/my_atoui.c						\
				libC/my_int_to_str.c				\
				libC/my_uint_to_str.c				\
				libC/my_put_nbr.c 					\
				libC/my_put_unsigned_nbr.c 			\
				libC/my_putchar.c 					\
				libC/my_putstr.c 					\
				libC/my_revstr.c 					\
				libC/my_strlen.c 					\
				libC/my_str_isalpha.c 				\
				libC/my_str_isnum.c 				\
				libC/my_strcmp.c 					\
				libC/my_strncmp.c 					\
				libC/my_strcpy.c 					\
				libC/my_strncpy.c 					\
				libC/print_error.c 					\
				libC/my_arrlen.c 					\
				libC/my_putarr.c 					\
				libC/my_str_to_word_array.c    		\
				libC/my_strdup.c 					\
				libC/my_strcat.c 					\
				libC/my_str_begin_matches.c 		\
				libC/get_file_size.c 				\
				libC/my_json_parser.c 				\
\
				my_printf/my_printf.c					\
				my_printf/flags_0to4.c					\
				my_printf/flags_bases.c					\
				my_printf/flags_check.c					\
				my_printf/flags_special.c				\
				my_printf/special_flags.c				\
				my_printf/modulo_check.c				\
				my_printf/my_put_unsigned_nbr.c			\
				my_printf/flags_bases_nesteds.c 		\
				my_printf/flags_0to4_nesteds.c 			\
\
				CSFML/init_object.c 					\
				CSFML/create_sound.c 					\
				CSFML/create_text.c 					\
				CSFML/is_sprite_clicked.c 				\
				CSFML/is_sprite_clicked_raw.c 			\
				CSFML/is_sprite_hovered.c 				\
				CSFML/is_sprite_hovered_raw.c 			\
				CSFML/set_rect.c 						\

OBJ 	= 		$(SRC:.c=.o)

NAME 	=		libmy.a

CFLAGS 	=		-g -I../../include

all: $(NAME)

$(NAME): 		$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)