/*
** EPITECH PROJECT, 2021
** Workshop_Linked_lists
** File description:
** my_list
*/

#include <stdlib.h>
#include <stdio.h>
#include "my_list.h"

int my_put_in_list(list_t **list, char *data)
{
    node_t *node = malloc(sizeof(node_t));

    if (node == NULL)
        return (0);
    node->data = data;
    node->next = *list;
    *list = node;
    return (1);
}

int my_append_to_list(list_t **list, char *data)
{
    node_t *node = malloc(sizeof(node_t));
    list_t *head = *list;

    if (node == NULL)
        return (0);
    node->data = data;
    node->next = NULL;
    if (*list == NULL) {
        *list = node;
    } else {
        while (head->next != NULL) {
            head = head->next;
        }
        head->next = node;
    }
    return (1);
}

int my_list_size(list_t *list)
{
    int index = 0;

    while (list != NULL) {
        index += 1;
        list = list->next;
    }
    return (index);
}

void my_show_list(list_t *list)
{
    while (list != NULL) {
        printf("%s\n", list->data);
        list = list->next;
    }
}

list_t *my_params_to_list(int argc, char **argv)
{
    int index = 1;
    list_t *list = NULL;

    while (index < argc) {
        my_append_to_list(&list, argv[index]);
        index += 1;
    }
    return (list);
}

void my_free_list(list_t **list)
{
    node_t *node_to_free = NULL;

    while (*list != NULL) {
        *list = (*list)->next;
        free(*list);
    }
}