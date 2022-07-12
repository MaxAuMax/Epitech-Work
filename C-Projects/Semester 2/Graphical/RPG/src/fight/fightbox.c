/*
** EPITECH PROJECT, 2021
** B-MUL-200-NCE-2-1-myrpg-hugo.houbert
** File description:
** fightbox.c
*/

#include "rpg.h"

void all_displaychat(t_global *glb)
{
    display_chatbox_player(glb);
    display_chatbox_player2(glb);
    display_chatbox_player3(glb);
}

void name_perso(t_global *glb)
{
    glb->dsp = true;
    glb->name = malloc(sizeof(t_text));
    sfColor color_text = {255, 255, 255, 255};
    glb->name->str = glb->nm;
    glb->name->text = sfText_create();
    glb->name->font = sfFont_createFromFile("assets/font.ttf");
    sfText_setFont(glb->name->text, glb->name->font);
    sfText_setColor(glb->name->text, color_text);
    glb->name->pos = (sfVector2f) {125, 900};
    sfText_setCharacterSize(glb->name->text, 30);
    sfText_setPosition(glb->name->text, glb->name->pos);
    sfText_setString(glb->name->text, glb->nm);
    sfRenderWindow_drawText(glb->window->w, glb->name->text,
    NULL);
}

void chatbox1(t_global *glb)
{
    glb->dsp = true;
    glb->chatbox1 = malloc(sizeof(t_text));
    sfColor color_text = {255, 255, 255, 255};
    glb->chatbox1->str = glb->chat;
    glb->chatbox1->text = sfText_create();
    glb->chatbox1->font = sfFont_createFromFile("assets/font.ttf");
    sfText_setFont(glb->chatbox1->text, glb->chatbox1->font);
    sfText_setColor(glb->chatbox1->text, color_text);
    glb->chatbox1->pos = (sfVector2f) {300, 730};
    sfText_setCharacterSize(glb->chatbox1->text, 25);
    sfText_setPosition(glb->chatbox1->text, glb->chatbox1->pos);
    word_word(glb);
}

char *my_strncpy(char *str, int i)
{
    int j = 0;
    char *str2 = malloc(sizeof(char) * (i + 1));
    for (j = 0; j < i; j++)
        str2[j] = str[j];
    str2[j] = '\0';
    return (str2);
}

void word_word(t_global *glb)
{
    char *str = NULL;
    for (int i = 0; glb->chat[i] != '\0' && glb->dsp == true; i++) {
        sfTime time_w = sfClock_getElapsedTime(glb->word_clk);
        float second_word = time_w.microseconds / 1000000.0;
        if (second_word > 0.01) {
            str = my_strncpy(glb->chat, i);
            sfText_setString(glb->chatbox1->text, str);
            draw_all_words(glb);
            if (glb->int_map == 3) anim_snow(glb);
            sfRenderWindow_drawText(glb->window->w, glb->chatbox1->text,
                NULL);
            event_box(glb);
            sfClock_restart(glb->word_clk);
        }
        sfRenderWindow_display(glb->window->w);
    }
}
