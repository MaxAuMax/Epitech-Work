/*
** EPITECH PROJECT, 2021
** mmaxime
** File description:
** my.h
*/

#include <stdio.h>
#include <stdlib.h>

#ifndef MY_H_
    #define MY_H_

int my_strlen(char const *str);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_str_to_int(char *str);

typedef struct s_ins {
    int nb;
    struct s_ins *next;
} ins;

typedef struct s_pile {
    ins *first;
} pile;

void display(pile *pl);
void empile(pile *pl, int nb);
int depile(pile *pl);
int sort(pile *pa, pile *pb);
void push_swap(pile *pa, pile *pb);

int is_digit(char c, int len);
int check(int ac, char **av);
int sorted(int ac, char **av);

void sa(pile *pa, int yes);
void sb(pile *pb, int yes);
void sc(pile *pa, pile *pb);
void pa(pile *pa, pile *pb, int yes);
void pb(pile *pa, pile *pb, int yes);
void ra(pile *pa, int yes);
void rb(pile *pb, int yes);
void rr(pile *pa, pile *pb);
void rra(pile *pa, int yes);
void rrb(pile *pb, int yes);
void rrr(pile *pa, pile *pb);

#endif
