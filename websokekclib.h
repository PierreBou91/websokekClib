#ifndef WEBSOCKEKCLIB_H
#define WEBSOCKEKCLIB_H

typedef struct
{
    int **map;
    int size;
} WorldMap;

WorldMap *allocWorldMap(int size);
void freeWorldMap(WorldMap **mapPtr);

#endif // WEBSOCKEKCLIB_H
