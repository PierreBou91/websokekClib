#include <stdio.h>
#include <stdlib.h>
#include "websokekclib.h"

int main()
{
    int mapSize = 50;
    WorldMap *map = allocWorldMap(mapSize);
    printWorldMap(map);
    return 0;
}
