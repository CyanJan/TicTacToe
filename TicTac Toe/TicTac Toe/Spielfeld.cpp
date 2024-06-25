#include "Spielfeld.h"

Spielfeld::Spielfeld(int pXpos, int pYpos)
{
	xPos = pXpos;
	yPos = pYpos;

	turn = 0;

	DieFelder[0] = new Feld(xPos       , yPos	);
	DieFelder[1] = new Feld(xPos + 50  , yPos	);
	DieFelder[2] = new Feld(xPos + 100 , yPos	);
	DieFelder[3] = new Feld(xPos       , yPos + 50	);
	DieFelder[4] = new Feld(xPos + 50  , yPos + 50	);
	DieFelder[5] = new Feld(xPos + 100 , yPos + 50	);
	DieFelder[6] = new Feld(xPos       , yPos + 100	);
	DieFelder[7] = new Feld(xPos + 50  , yPos + 100	);
	DieFelder[8] = new Feld(xPos + 100 , yPos + 100	);
	
}

void Spielfeld::increaseTurn()
{
	turn = turn++;
}

int Spielfeld::getTurn()
{
	return turn;
}

void Spielfeld::setmark(bool pwhich, int pWhere) // true = cross
{
	if (pwhich == true)
	{
		DieFelder[pWhere]->setCross();
	}
	else
	{
		DieFelder[pWhere]->setCircle();
	}
}

bool Spielfeld::welcherSpieler()
{
	if ((turn % 2) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

bool Spielfeld::CheckWin2()
{
	if (!(turn > 4))
	{
		return false;
	}

	if (DieFelder[4]->getCircle() == true)
	{
		if (DieFelder[1]->getCircle() == true)
		{
			if (DieFelder[7]->getCross() == true)
			{
				return true;
			}
		}

		if (DieFelder[3]->getCircle() == true)
		{
			if (DieFelder[5]->getCircle() == true)
			{
				return true;
			}
		}

		if (DieFelder[0]->getCircle() == true)
		{
			if (DieFelder[8]->getCircle() == true)
			{
				return true;
			}
		}

		if (DieFelder[6]->getCircle() == true)
		{
			if (DieFelder[2]->getCircle() == true)
			{
				return true;
			}
		}
	}

	if (DieFelder[0]->getCircle() == true)
	{
		if (DieFelder[3]->getCircle() == true)
		{
			if (DieFelder[6]->getCircle() == true)
			{
				return true;
			}
		}

		if (DieFelder[1]->getCircle() == true)
		{
			if (DieFelder[2]->getCircle() == true)
			{
				return true;
			}
		}
	}

	if (DieFelder[8]->getCircle() == true)
	{
		if (DieFelder[7]->getCircle() == true)
		{
			if (DieFelder[6]->getCircle() == true)
			{
				return true;
			}
		}

		if (DieFelder[5]->getCircle() == true)
		{
			if (DieFelder[2]->getCircle() == true)
			{
				return true;
			}
		}
	}

	return false;

}

void Spielfeld::clear()
{
	for (int i = 0; i < 9; i++)
	{
		DieFelder[i]->clear();
	}
}

bool Spielfeld::CheckWin1()
{
	if (!(turn > 4))
	{
		return false;
	}

	if (DieFelder[4]->getCross() == true)
	{
		if (DieFelder[1]->getCross() == true)
		{
			if (DieFelder[7]->getCross() == true)
			{
				return true;
			}
		}

		if (DieFelder[3]->getCross() == true)
		{
			if (DieFelder[5]->getCross() == true)
			{
				return true;
			}
		}

		if (DieFelder[0]->getCross() == true)
		{
			if (DieFelder[8]->getCross() == true)
			{
				return true;
			}
		}

		if (DieFelder[6]->getCross() == true)
		{
			if (DieFelder[2]->getCross() == true)
			{
				return true;
			}
		}
	}

	if (DieFelder[0]->getCross() == true)
	{
		if (DieFelder[3]->getCross() == true)
		{
			if (DieFelder[6]->getCross() == true)
			{
				return true;
			}
		}

		if (DieFelder[1]->getCross() == true)
		{
			if (DieFelder[2]->getCross() == true)
			{
				return true;
			}
		}
	}

	if (DieFelder[8]->getCross() == true)
	{
		if (DieFelder[7]->getCross() == true)
		{
			if (DieFelder[6]->getCross() == true)
			{
				return true;
			}
		}

		if (DieFelder[5]->getCross() == true)
		{
			if (DieFelder[2]->getCross() == true)
			{
				return true;
			}
		}
	}

	return false;

}

void Spielfeld::Draw(Graphics^ c)
{
	for (int i = 0; i < 9; i++)
	{
		DieFelder[i]->draw(c);
	}

}
