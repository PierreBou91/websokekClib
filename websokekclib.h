#ifndef WEBSOCKEKCLIB_H
#define WEBSOCKEKCLIB_H

typedef struct
{
    int size;
} WorldMap;

WorldMap *allocWorldMap(int size);
void printWorldMap(WorldMap *map);

#endif // WEBSOCKEKCLIB_H
