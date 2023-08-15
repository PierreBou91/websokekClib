#include "websokekclib.h"
#include <stdio.h>
#include <stdlib.h>

WorldMap *allocWorldMap(int size)
{
    WorldMap *map = (WorldMap *)malloc(sizeof(WorldMap));
    if (map == NULL)
    {
        return NULL;
    }

    map->size = size;

    map->map = (int **)malloc(size * sizeof(int *));
    if (map->map == NULL)
    {
        free(map);
        return NULL;
    }

    for (int i = 0; i < size; i++)
    {
        map->map[i] = (int *)calloc(size, sizeof(int));
        if (map->map[i] == NULL)
        {
            for (int j = 0; j < i; j++)
            {
                free(map->map[j]);
            }
            free(map->map);
            free(map);
            return NULL;
        }
    }

    return map;
}

void freeWorldMap(WorldMap **mapPtr)
{
    if (mapPtr == NULL || *mapPtr == NULL)
    {
        return;
    }

    WorldMap *map = *mapPtr;

    for (int i = 0; i < map->size; i++)
    {
        free(map->map[i]);
    }

    free(map->map);

    free(map);

    *mapPtr = NULL;
}
