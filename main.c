#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "websokekclib.h"

void printWorldMap(WorldMap *map);

int main()
{
    int mapSize = 50;
    WorldMap *map = allocWorldMap(mapSize);
    int playerCoords[2] = {5, 5};
    map->map[playerCoords[0]][playerCoords[1]] = 1;
    system("clear");
    while (1)
    {
        printWorldMap(map);
        usleep(16667);
    }
    freeWorldMap(&map);
    return 0;
}

void printWorldMap(WorldMap *map)
{
    if (map == NULL)
    {
        printf("Map is NULL\n");
        return;
    }

    // printf("\033[0;0H");
    printf("\033[H\033[J");

    for (int i = 0; i < map->size; i++)
    {
        for (int j = 0; j < map->size; j++)
        {
            printf("%d ", map->map[i][j]);
        }
        printf("\n");
    }
}
