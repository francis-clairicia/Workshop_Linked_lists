/*
** EPITECH PROJECT, 2021
** Workshop_Linked_lists
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "my_list.h"

int main(int ac, char **av)
{
    list_t *list = my_params_to_list(ac, av);

    printf("List size: %d\n", my_list_size(list));
    my_show_list(list);
    my_free_list(&list);
    printf("%p\n", list);
    return 0;
}