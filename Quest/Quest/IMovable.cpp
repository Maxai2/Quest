#include <iostream>

#include "IMovable.h"
#include "Map.h"

using namespace std;
//--------------------------------------------------------------------------------
void IMovable::move(Direction dir)
{
    SetCoord(position.x, position.y);
    cout << ' ';

    switch (dir)
    {
    case 0:
        if (position.y > 0 && Map::get().isEmptyCell(position.y - 1, position.x))
            position.y--;
        break;
    case 1:
        if (position.y < Map::get().height && Map::get().isEmptyCell(position.y + 1, position.x))
            position.y++;
        break;
    case 2:
        if (position.x > 0 && Map::get().isEmptyCell(position.y, position.x - 1))
            position.x--;
        break;
    case 3:
        if (position.x < Map::get().width && Map::get().isEmptyCell(position.y, position.x + 1))
            position.x++;
    }
}
//--------------------------------------------------------------------------------