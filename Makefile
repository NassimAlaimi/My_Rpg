##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## root Makefile
##

SRC			=		src/game/main.c 									\
					src/game/error_handling.c 							\
					src/game/game_init.c 								\
					src/game/game_dispose.c 							\
\
					src/menu/menu.c 									\
					src/menu/init/menu_init.c 							\
					src/menu/checks/menu_checks.c 						\
					src/menu/draw/menu_draw.c 							\
					src/menu/dispose/menu_dispose.c 					\
\
					src/play/play.c 									\
\
					src/play/init/play_init.c 							\
					src/play/init/play_init_ground.c 					\
					src/play/init/play_init_walls.c 					\
					src/play/init/play_init_towers.c 					\
					src/play/init/play_init_fence.c 					\
					src/play/init/play_init_collision.c 				\
					src/play/init/play_init_pause.c						\
					src/play/init/play_player_init.c					\
					src/play/init/play_init_player_spritesheet.c		\
					src/play/init/play_init_npc.c						\
					src/play/init/play_init_box.c						\
					src/play/init/play_init_walls_extra.c				\
					src/play/init/play_init_walls_top.c					\
					src/play/init/play_init_walls_kitchen.c				\
					src/play/init/play_init_tiles_shower.c 				\
					src/play/init/play_init_tiles_library.c 			\
					src/play/init/play_init_tiles_laundry.c 			\
					src/play/init/play_set_ground_tile_kitchen.c 		\
					src/play/init/play_set_tiles_ground_extra.c 		\
					src/play/init/play_init_tiles_outside.c 			\
					src/play/init/play_init_pickaxe.c					\
\
					src/play/checks/play_checks.c 						\
					src/play/checks/play_check_player_movement.c		\
					src/play/checks/play_check_pause.c 					\
					src/play/checks/play_check_box.c					\
					src/play/checks/play_check_item_selected.c			\
\
					src/play/draw/play_draw.c 							\
					src/play/draw/play_draw_ground.c 					\
					src/play/draw/play_draw_walls.c 					\
					src/play/draw/play_draw_towers.c 					\
					src/play/draw/play_draw_pause.c 					\
					src/play/draw/play_draw_player.c					\
					src/play/draw/play_draw_npc.c						\
					src/play/draw/play_draw_text.c						\
					src/play/draw/play_draw_box.c						\
					src/play/draw/play_draw_objet.c						\
\
					src/play/dispose/play_dispose.c 					\
					src/play/dispose/npc_dispose.c						\
\
					src/victory/victory.c 								\
					src/victory/init/victory_init.c						\
					src/victory/init/victory_init_particles.c 			\
					src/victory/draw/victory_draw.c						\
					src/victory/checks/victory_checks.c					\
					src/victory/dispose/victory_dispose.c				\
\
					src/play/inventory/init/inventory_init.c			\
					src/play/inventory/draw/inventory_draw.c			\
					src/play/inventory/dispose/inventory_dispose.c		\
					src/play/inventory/update_inventory.c				\
\
					src/settings/settings.c 							\
					src/settings/init/settings_init.c 					\
					src/settings/init/settings_init2.c 					\
					src/settings/draw/settings_draw.c 					\
					src/settings/checks/settings_checks.c 				\
					src/settings/checks/settings_check_skins.c 			\
\
					src/howtoplay/howtoplay.c 							\
					src/howtoplay/init/howtoplay_init.c 				\
					src/howtoplay/draw/howtoplay_draw.c 				\
					src/howtoplay/checks/howtoplay_checks.c 			\
\
					src/combat/combat.c									\
					src/combat/init/combat_init.c						\
					src/combat/init/combattant_init.c					\
					src/combat/init/hp_bar_init.c						\
					src/combat/init/stats_board_init.c					\
					src/combat/draw/combat_draw.c						\
					src/combat/checks/combat_checks.c					\
					src/combat/attacks/basic_attack.c					\
					src/combat/attacks/opponent_attack.c				\
					src/combat/attacks/armor_breaker.c					\
					src/combat/dispose/combat_dispose.c					\
					src/combat/anim/anim_player.c						\
\
					src/game_over/game_over.c 							\
					src/game_over/init/game_over_init.c 				\
					src/game_over/draw/game_over_draw.c 				\
					src/game_over/checks/game_over_checks.c 			\

OBJ 		= 		$(SRC:.c=.o)

NAME 		=		my_rpg

#Werror

CFLAGS 		= 		-g -Wextra -Wshadow -W -Wall -lcsfml-graphics 			\
					-lcsfml-window -lcsfml-system -lcsfml-audio -I./include \
					-lm

LIB 		=		-L./lib/my -lmy

all: $(NAME)

$(NAME): 		$(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LIB)

clean:
		$(RM) src/*.o
		$(RM) src/game/*.o
		$(RM) src/menu/*.o
		$(RM) src/menu/init/*.o
		$(RM) src/menu/checks/*.o
		$(RM) src/menu/draw/*.o
		$(RM) src/menu/dispose/*.o
		$(RM) src/play/*.o
		$(RM) src/play/init/*.o
		$(RM) src/play/checks/*.o
		$(RM) src/play/draw/*.o
		$(RM) src/play/dispose/*.o
		$(RM) src/play/inventory/*.o
		$(RM) src/play/inventory/init/*.o
		$(RM) src/play/inventory/draw/*.o
		$(RM) src/play/inventory/dispose/*.o
		$(RM) src/settings/*.o
		$(RM) src/settings/init/*.o
		$(RM) src/settings/draw/*.o
		$(RM) src/settings/checks/*.o
		$(RM) src/settings/dispose/*.o
		$(RM) src/howtoplay/*.o
		$(RM) src/howtoplay/init/*.o
		$(RM) src/howtoplay/draw/*.o
		$(RM) src/howtoplay/checks/*.o
		$(RM) src/howtoplay/dispose/*.o
		$(RM) src/combat/*.o
		$(RM) src/combat/init/*.o
		$(RM) src/combat/draw/*.o
		$(RM) src/combat/checks/*.o
		$(RM) src/combat/attacks/*.o
		$(RM) src/combat/dispose/*.o
		$(RM) src/combat/anim/*.o
		$(RM) src/game_over/*.o
		$(RM) src/game_over/init/*.o
		$(RM) src/game_over/draw/*.o
		$(RM) src/game_over/checks/*.o
		$(RM) src/victory/*.o
		$(RM) src/victory/init/*.o
		$(RM) src/victory/draw/*.o
		$(RM) src/victory/checks/*.o
		$(RM) lib/my/libC/*.o
		$(RM) lib/my/my_printf/*.o
		$(RM) lib/my/CSFML/*.o

fclean:		clean
		$(RM) lib/my/libmy.a
		$(RM) my_rpg

re: 	fclean all

.PHONY  : all clean fclean re