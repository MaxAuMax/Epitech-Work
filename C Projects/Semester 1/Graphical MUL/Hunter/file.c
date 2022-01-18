/*
** EPITECH PROJECT, 2021
** B-MUL-100-NCE-1-1-myhunter-maxime.mallet
** File description:
** file.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdlib.h>
#include "include/my.h"

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode video = {1920, 1080, 32};
    sfColor color = (sfRed);
    sfEvent event;
    sfFont *font = sfFont_createFromFile("files/TEST.ttf");

    window  = sfRenderWindow_create(video, "Text", sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);

    sfText *text = sfText_create();
    sfText_setString(text, "Hello World");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfRed);

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event))
        {
            /* Close window : exit */
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }

        /* Clear the screen */
        sfRenderWindow_clear(window, sfBlack);

        /* Draw the text */
        sfRenderWindow_drawText(window, text, NULL);

        /* Update the window */
        sfRenderWindow_display(window);
    }

    /* Cleanup resources */
    sfText_destroy(text);
    sfRenderWindow_destroy(window);

    return (0);
}