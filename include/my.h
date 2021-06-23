/*
** EPITECH PROJECT, 2020
** _MY_H_
** File description:
** _MY_H_
*/

#ifndef _MY_H_
#define _MY_H_

#include "my_printf.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>

/* STRUCTS */

typedef struct game_t {
    sfEvent event;
    sfVideoMode mode;
    sfRenderWindow *window;

    int scene;
    bool pause;

    sfMusic *music;
    int sound_volume;
    int music_volume;
    int skin_choice;

    sfText *skin_choice_text;
    sfText *sound_volume_text;
    sfText *music_volume_text;

    sfFont *fipps_font;
}game_s;

typedef struct menu_t {
    sfClock *bg_clock;
    sfTime bg_time;
    float elaspedtime;

    sfSprite *bg_sprite;
    sfTexture *bg_texture;

    sfSprite *logo_sprite;
    sfTexture *logo_texture;

    sfSprite *playbutton_sprite;
    sfTexture *playbutton_texture;

    sfSprite *htpbutton_sprite;
    sfTexture *htpbutton_texture;

    sfSprite *settingsbutton_sprite;
    sfTexture *settingsbutton_texture;

    sfSprite *quitbutton_sprite;
    sfTexture *quitbutton_texture;

    sfSprite *arrow_sprite;
    sfTexture *arrow_texture;
}menu_s;

typedef struct howtoplay_t {
    sfSprite *bg_sprite;
    sfTexture *bg_texture;

    sfSprite *htp_logo_sprite;
    sfTexture *htp_logo_texture;

    sfSprite *back_arrow_sprite;
    sfTexture *back_arrow_texture;
}howtoplay_s;

typedef struct settings_t {
    sfClock *bg_clock;
    sfTime bg_time;
    float elaspedtime;
    sfSprite *bg_sprite;
    sfTexture *bg_texture;

    sfSprite *settings_logo_sprite;
    sfTexture *settings_logo_texture;

    sfSprite *back_arrow_sprite;
    sfTexture *back_arrow_texture;

    sfSprite *sound_logo_sprite;
    sfTexture *sound_logo_texture;
    sfSprite *sound_right_arrow_sprite;
    sfSprite *sound_left_arrow_sprite;

    sfSprite *music_logo_sprite;
    sfTexture *music_logo_texture;
    sfSprite *music_right_arrow_sprite;
    sfSprite *music_left_arrow_sprite;

    sfSprite *skin_logo_sprite;
    sfTexture *skin_logo_texture;
    sfSprite *skin_right_arrow_sprite;
    sfSprite *skin_left_arrow_sprite;

    sfTexture *arrows_texture;
}settings_s;

//inventory structs
typedef struct obj_t {
    int id;
    char *name;
    sfSprite *obj_sprite;
    sfTexture *obj_texture;
}obj_s;

typedef struct stats_t {
    int hp;
    int exp;
    int def;
    int atk;
    int level;
    int max_hp;
    int crit_chance;
    int dodge_chance;
}stats_s;

typedef struct inventory_t {
    int curr_obj;
    obj_s *obj;
    sfVector2f *obj_pos;
    stats_s *stats;

    sfSprite *selected_sprite;
    sfTexture *selected_texture;

    sfVector2f inv_pos;
    sfSprite *inv_sprite;
    sfTexture *inv_texture;
}inventory_s;

typedef struct box_t {

    sfClock *box_clock;
    sfTime box_time;
    float box_ms;

    sfSprite *pickaxe_sprite;
    sfTexture *pickaxe_texture;

    sfSprite *screwdriver_sprite;
    sfTexture *screwdriver_texture;

    sfSprite *box_sprite;
    sfTexture *box_texture;
    bool box;
    int **obj_box;
    int box_open;
}box_s;


typedef struct player_t {
    sfClock *player_clock;
    sfTime player_time;
    float player_ms;

    sfClock *sprite_clock;
    sfTime sprite_time;
    float sprite_ms;

    int direction;
    int status;
    int sprite_status;

    int max_l_r;
    int max_up;
    int max_down;

    sfSprite *player_sprite;
    sfTexture *player_texture;

    sfVector2f pos;
    int speed;
}player_s;

typedef struct npc_t {
    sfSprite *spr;
    sfTexture *texture;

    sfSprite *spr_txt;
    sfTexture *texture_txt;

    stats_s *stats;
}npc_s;

typedef struct play_t {
    int map_width;
    int map_height;

    sfSprite ***ground_sprite;
    sfTexture *ground_tileset;
    char *ground_buffer;
    int **ground_int_array;

    sfSprite ***walls_sprite;
    sfTexture *walls_tileset;
    char *walls_buffer;
    int **walls_int_array;

    sfRectangleShape *aggro_area;

    sfSprite **towers_sprites;
    sfTexture *tower_texture;

    sfSprite **fence_top_spr;
    sfTexture *fence_top_texture;
    sfSprite **fence_left_spr;
    sfTexture *fence_left_texture;

    char **collision_array;
    char *collision_buffer;

    sfView *view;
    sfVector2f view_size;

    inventory_s *inventory;
    player_s *player;
    box_s *box;

    npc_s *npcs;

    // PAUSE //
    bool pause;
    sfRectangleShape *pause_bg;

    sfSprite *pause_logo_sprite;
    sfTexture *pause_logo_texture;

    sfSprite *pause_resume_sprite;
    sfTexture *pause_resume_texture;

    sfSprite *pause_mainmenu_sprite;
    sfTexture *pause_mainmenu_texture;

    sfSprite *pause_quit_sprite;
    sfTexture *pause_quit_texture;
}play_s;

typedef struct victory_t {
    sfRectangleShape **particles;
    sfVector2f *velocities;

    sfSprite *mainmenu_button_sprite;
    sfTexture *mainmenu_button_texture;

    sfSprite *quit_button_sprite;
    sfTexture *quit_button_texture;

    sfText *title;
}victory_s;

//combat structs
typedef struct hp_bar_t {
    sfRectangleShape *bg_bar;
    sfRectangleShape *fill_bar;
}hp_bar_s;

typedef struct txt_stat_t{
    sfText *hp;
    sfText *max_hp;
    sfText *atk;
    sfText *def;
    sfText *exp;
    sfText *max_exp;
    sfText *level;
}txt_stat_s;

typedef struct combattant_t {
    int status;
    sfText *name;
    sfVector2f pos;
    txt_stat_s txt;
    stats_s *stats;
    hp_bar_s *hp_bar;
    sfSprite *spr_combtnt;
    sfTexture *texture_combtnt;
    sfSprite *spr_stats;
    sfTexture *texture_stats;
}combattant_s;

typedef struct combat_t {
    combattant_s *player;
    combattant_s *opponent;
    sfSprite *bg_sprite;
    sfTexture *bg_texture;
    sfSprite *keys_sprite;
    sfTexture *keys_texture;
}combat_s;

typedef struct game_over_t {
    sfSprite *mainmenu_button_sprite;
    sfTexture *mainmenu_button_texture;

    sfSprite *quit_button_sprite;
    sfTexture *quit_button_texture;

    sfText *title;
}game_over_s;

/*
Scenes

0 - menu {
    >title<

    play >
    how to play >
    settings >

    < quit
}

1 - play {
    >title<

    new game  > Initialize everthing
    load save > load file and set game variables (positions, quests, mobs, ...)

    < back
}

2 - how to play {
    >howtoplay img<

    < back
}

3 - settings{
    >title<

    music on/off (slider?)
    sound on/off

    < back
}

4 - combat {
    >bg combat image<

    two characters

    attack buttons
}
*/

/* LIB FUNCTIONS */

// libC

int my_getnbr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
void my_putstr(char const *str);
char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *str);
char *my_strncpy(char *dest, char const *src, int n);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, size_t n);
int my_strlen(char *str);
int my_str_isnum(char const *str);
int my_str_isalpha(char const *str);
char *my_int_to_str(int nb);
char *my_uint_to_str(unsigned int nb);
int my_atoi(const char *nptr);
unsigned int my_atoui(const char *nptr);
void my_put_unsigned_nbr(unsigned int nb);
int print_error(char *str);
int my_arrlen(char **arr);
char *my_strdup(char const *src);
int get_file_size(char *str);
char **my_str_to_word_array(char const *str);
int **my_json_parser(int **array, char *buffer, int width);

// CSFML

void init_object(sfSprite **spr, sfTexture **texture, char *texture_path);
void init_sound(sfSound *sound, sfSoundBuffer *soundbuffer, char *filepath);
void text_init(sfText *text, char *string, unsigned int size, sfColor color);
void text_set_font(sfText *text, sfFont *font, char *font_path);
void text_set_outlinecolor(sfText *text, float thickness, sfColor color);
sfBool is_sprite_clicked(sfSprite *spr, sfImage *img, sfVector2i mpos);
sfBool is_sprite_clicked_raw(sfSprite *spr, sfVector2i mpos);
sfBool is_sprite_hovered(sfSprite *spr, sfImage *img, sfVector2i mpos);
sfBool is_sprite_hovered_raw(sfSprite *spr, sfVector2i mpos);
void set_rect(sfSprite *spr, sfIntRect rect);

/* PROJECT FUNCTIONS */

/* Main functions */

int my_rpg(void);
int error_handling(int ac);
game_s *init_game(game_s *game);
void game_dispose(game_s *game);

/* Menu */

int menu(game_s *game);

//initialization
menu_s *menu_init(menu_s *menu);

//checks
void menu_checks(game_s *game, menu_s *menu);

//draw
void menu_draw(game_s *game, menu_s *menu);

//disposal
void menu_dispose(menu_s *menu);



/* Play */

int play(game_s *game);

//initialization
play_s *play_init(game_s *game, play_s *play);
int play_init_ground(play_s *play);
int play_init_walls(play_s *play);
int play_init_towers(play_s *play);
int play_init_fences(play_s *play);
int play_init_collision(play_s *play);
void play_init_pause(play_s *play);
void play_init_npc(play_s *play);
void play_init_pickaxe(box_s *box);
void play_init_screwdriver(box_s *box);
void play_init_tiles_shower_bottom(play_s *play, int y, int x);
void play_init_tiles_shower_top(play_s *play, int y, int x);
void play_init_tile_library_bottom(play_s *play, int y, int x);
void play_init_tile_library_top(play_s *play, int y, int x);
void play_set_ground_tile_laundry_top(play_s *play, int y, int x);
void play_set_ground_tile_laundry_bottom(play_s *play, int y, int x);
void play_set_ground_tile_kitchen_top(play_s *play, int y, int x);
void play_set_ground_tile_kitchen_middle(play_s *play, int y, int x);
void play_set_ground_tile_kitchen_bottom(play_s *play, int y, int x);
void play_set_tiles_ground_extra(play_s *play, int y, int x);
void play_set_tiles_ground_extra_left(play_s *play, int y, int x);
void play_set_tiles_ground_extra_right(play_s *play, int y, int x);
void play_set_tiles_ground_extra_bottom(play_s *play, int y, int x);
void play_set_tiles_ground_extra_middle(play_s *play, int y, int x);
void play_set_tiles_ground_extra_top(play_s *play, int y, int x);
void play_set_tiles_outside(play_s *play, int y, int x);
void play_set_ground_tile_ventilation(play_s *play, int y, int x);

void play_set_walls_tiles_cell_laundry(play_s *play, int y, int x);
void play_set_walls_tiles_cell_library(play_s *play, int y, int x);
void play_set_walls_tiles_cell_showers(play_s *play, int y, int x);
void play_set_walls_tiles_cell_entrance(play_s *play, int y, int x);
void play_set_walls_tiles_cell_furniture(play_s *play, int y, int x);
void play_set_tiles_top(play_s *play, int y, int x);
void play_set_tiles_bottom(play_s *play, int y, int x);
void play_set_tiles_middle(play_s *play, int y, int x);
void play_set_walls_tiles_cell_kitchen(play_s *play, int y, int x);
void play_set_walls_tiles_cell_kitchen_right(play_s *play, int y, int x);
void play_set_walls_tiles_cell_kitchen_left(play_s *play, int y, int x);

player_s *init_player(player_s *player);
void play_init_player(player_s *player);
void play_draw_player(player_s *player);

box_s *init_box(box_s *box);

void play_init_inventory(play_s *play);

//checks
void play_checks(game_s *game, play_s *play);
void play_check_item_selcted(play_s *play);
void play_check_player_movement(game_s *game, play_s *play);
void play_pause_buttons_check(play_s *play, sfVector2i mpos, game_s *game);
void play_check_box(play_s *play, box_s *box);
void play_check_switch_ib(game_s *game, play_s *play);
//draw
void play_draw(game_s *game, play_s *play);
void play_draw_ground(game_s *game, play_s *play);
void play_draw_walls(game_s *game, play_s *play);
void play_draw_towers(game_s *game, play_s *play);
void play_draw_pause(game_s *game, play_s *play);
void play_draw_npc(game_s *game, play_s *play);
void play_draw_text(game_s *game, play_s *play);
void play_draw_box(game_s *game, box_s *box, play_s *play);
void play_draw_screw(game_s *game, play_s *play, int i, int y);
void play_draw_pck(game_s *game, play_s *play, int i, int y);

//disposal
void play_dispose(play_s *play);
void npc_dispose(play_s *play);

/* Settings */

int settings(game_s *game);

//initialization
settings_s *settings_init(settings_s *settings, game_s *game);
void settings_init_sound(settings_s *settings);
void settings_init_music(settings_s *settings);
void settings_init_skin_choice(settings_s *settings);
void settings_init_background(settings_s *settings);
void settings_skin_right_check(game_s *game, settings_s *settings, \
sfVector2i mpos);
void settings_skin_left_check(game_s *game, settings_s *settings, \
sfVector2i mpos);
void settings_back_check(game_s *game, settings_s *settings, sfVector2i mpos);

//checks
void settings_checks(game_s *game, settings_s *settings);

//draw
void settings_draw(game_s *game, settings_s *settings);

//disposal

/* How to play */

int howtoplay(game_s *game);

//initialization
howtoplay_s *howtoplay_init(howtoplay_s *howtoplay);

//checks
void howtoplay_checks(game_s *game, howtoplay_s *howtoplay);

//draw
void howtoplay_draw(game_s *game, howtoplay_s *howtoplay);

//disposal

/* Inventory */

//initialization
inventory_s *inventory_init(inventory_s *inventory);

//dispose
void inventory_dispose(inventory_s *inventory);

//draw
void play_draw_inventory(game_s *game, play_s *play);

void add_object(play_s *play, obj_s obj);
void update_inventory(game_s *game, play_s *play);

/* Combat */

void combat(game_s *game);
void combat_scene(game_s *game, stats_s *player_stats, stats_s *enemy_stats);
void player_combat_turn(game_s *game, combat_s *combat, sfBool *player_turn, \
sfClock *clock);
void update_hp_bar(combattant_s *combattant);

//initialization
void combat_init(combat_s *combat, stats_s *player_stats, stats_s *enemy_stats);
void init_combattant(combattant_s *combattant, stats_s *stats, char *filepath, \
char *name);
void init_stats_board(combattant_s *combattant, sfVector2f pos);
void init_hp_bar(combattant_s *combattant);

//checks
void combat_checks(game_s *game, combat_s *combat, sfBool *player_turn, \
sfClock *clock);

//draw
void combat_draw(sfRenderWindow *wndw, combat_s *combat);

//attacks
void basic_attack(combat_s *combat);
void opponent_attack(combat_s *combat, sfBool *player_turn);
void armor_breaker(combat_s *combat, int *armor_breaker_left);

//anim
void anim_player_charge(game_s *game, combat_s *combat, sfSprite *player_spr, \
sfClock *clock);
void anim_player_back(game_s *game, combat_s *combat, sfSprite *player_spr, \
sfClock *clock);

//dispose
void dispose_combat(combat_s *combat);

/* Game Over */

int game_over(game_s *game);

//initialization
game_over_s *game_over_init(game_over_s *game_over, game_s *game);

//checks
void game_over_checks(game_s *game, game_over_s *game_over);

//draw
void game_over_draw(game_s *game, game_over_s *game_over);

/* Victory */

int victory(game_s *game);
victory_s *victory_init(game_s *game, victory_s *victory);
void victory_draw(game_s *game, victory_s *victory);
void victory_init_particles(victory_s *victory);
void victory_checks(game_s *game, victory_s *victory);
void victory_dispose(victory_s *victory);

#endif /* !_MY_H_ */