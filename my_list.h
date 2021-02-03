/*
** EPITECH PROJECT, 2021
** Workshop_Linked_lists
** File description:
** my_list
*/

#ifndef MY_LIST_H_
#define MY_LIST_H_

struct node
{
    char *data;
    struct node *next;
};

typedef struct node node_t;
typedef struct node list_t;

int my_put_in_list(list_t **list, char *data);
int my_append_to_list(list_t **list, char *data);
int my_list_size(list_t *list);
void my_show_list(list_t *list);
list_t *my_params_to_list(int argc, char **argv);
void my_free_list(list_t **list);

#endif /* !MY_LIST_H_ */
