#include "Skeleton.h"
//---------------------------------------------------------------------------------------
Skeleton::Skeleton(Damage damage, Position position, int hp, int cooldown) : Enemy(damage, position, hp, cooldown)
{
	Symb = 'S';
}
//---------------------------------------------------------------------------------------
void Skeleton::scanMap(Direction dir, Character &target)
{
    static bool map[3][5] =
    {
        1, 1, 1, 1, 1,
        0, 1, 1, 1, 0,
        0, 0, 1, 0, 0
    }

	bool wallCheck = false, found = false, block = false;
	int wallCount = 0;

	Position PPos, SPos;

	PPos = target.getPos();
	SPos = this->position;

	for (int i = 0; i < 3; i++)
	{
		for (int j = -2; j < 3; j++)
		{
            //if ((j == 0 && i == 0) ||
            //    ((j == -1 || j == 0 || j == 1) && i == 1) ||
            //    ((j == -2 || j == -1 || j == 0 || j == 1 || j == 2) && i == 2))
            if (map[i][j + 2])
            {
				switch (dir)
				{
				case Up:
				{

					if (!(Map::get().isEmptyCell(position.y - i - 1, position.x + j)) || wallCount == 3)
					{
						wallCheck = true;
						break;
					}

					if (wallCount != 3)
						wallCount++;

					if (PPos.x == SPos.x + j && PPos.y == SPos.y - i - 1)
					{
						found = true;
						attack(target);
						break;
					}
				}
				break;
				case Down:
				{
				
					if (!(Map::get().isEmptyCell(position.y + i + 1, position.x + j)) || wallCount == 3)
					{
						wallCheck = true;
						break;
					}

					if (wallCount != 3)
						wallCount++; 
					
					if (PPos.x == SPos.x + j && PPos.y == SPos.y + i + 1)
					{
						found = true;
						attack(target);
						break;
					}
				}
				break;
				case Left:
				{
					if (!(Map::get().isEmptyCell(position.y + i, position.x - j - 1)) || wallCount == 3)
					{
						wallCheck = true;
						break;
					}

					if (wallCount != 3)
						wallCount++; 
					
					if (PPos.x == SPos.x - j - 1 && PPos.y == SPos.y + i)
					{
						found = true;
						attack(target);
						break;
					}
				}
				break;
				case Right:
				{
					if (!(Map::get().isEmptyCell(position.y + i, position.x + j + 1)) || wallCount == 3)
					{
						wallCheck = true;
						break;
					}

					if (wallCount != 3)
						wallCount++;

					if (PPos.x == SPos.x + j + 1 && PPos.y == SPos.y + i)
					{
						found = true;
						attack(target);
						break;
					}
				}

				}
			}
		}
		if (found || wallCheck)
			break;
		else
			wallCount = 0;
	}
}
//---------------------------------------------------------------------------------------
void Skeleton::attack(Character & target)
{
	Position Ppos, Spos;

	Ppos = target.getPos();
	Spos = this->position;

	while ((Ppos.x != Spos.x) && (Ppos.y != Spos.y))
	{
		if (Ppos.x < Spos.x) this->move(Left);
		else if (Ppos.x > Spos.x) this->move(Right);
		else if (Ppos.y < Spos.y) this->move(Down);
		else if (Ppos.y > Spos.y) this->move(Up);

		Ppos = target.getPos();
		Spos = this->position;
	}


    if (cooldown == 0)
    {
        int dam = MRand(damage.min, damage.max);

        if (target.getHp() >= dam)
            target.setHp(target.getHp() - dam);
        else
            target.setHp(0);

        cooldown = 10;
    }
    else
        cooldown--;

}
//---------------------------------------------------------------------------------------
