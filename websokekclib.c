#include "websokekclib.h"
#include <stdio.h>
#include <stdlib.h>

WorldMap *allocWorldMap(int size)
{
    WorldMap *map = (WorldMap *)malloc(sizeof(WorldMap));
    map->size = size;

    return map;
}

void printWorldMap(WorldMap *map)
{
    for (int i = 0; i < map->size; i++)
    {
        for (int j = 0; j < map->size; j++)
        {
            printf("O ");
        }
        printf("\n");
    }
}
