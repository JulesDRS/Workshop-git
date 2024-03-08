/*
** EPITECH PROJECT, 2024
** test2 [WSL: Ubuntu]
** File description:
** ok
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct parsed_infos_s {
    int ok;
} parsed_infos_t;


parsed_infos_t *find_the_commands(char *filepath)
{
    printf("%s\n", filepath);
    return NULL;
}

int main(int ac, char **av)
{
    parsed_infos_t *infos = NULL;

    if (ac == 2 && (av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')) {
        print_usage();
        return 0;
    }
    infos = find_the_commands(av[1]);
    if (entry_handler(ac, av) != 0 || !infos || file_spawner(av[1], infos->header) != 0)
        return 84;
    return 0;
}
