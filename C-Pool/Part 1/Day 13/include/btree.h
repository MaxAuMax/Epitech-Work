/*
** EPITECH PROJECT, 2021
** btree
** File description:
** ..
*/

#ifndef BTREE_H_
    #define BTREE_H_

typedef struct btree
{
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;

btree_t *btree_create_node(void *item);
void btree_apply_prefix(btree_t *root , int (* applyf)(void *));

#endif
