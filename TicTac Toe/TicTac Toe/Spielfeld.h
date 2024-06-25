#include "Feld.h" 

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing;

class Spielfeld
{
private:
	int xPos;
	int yPos;

	int turn;
	
	Feld* DieFelder[9];

	
public:
	Spielfeld(int pXpos, int pYpos);

	void increaseTurn();
	int	 getTurn();

	void setmark(bool pwhich, int pWhere);

	bool welcherSpieler();

	bool CheckWin1();
	bool CheckWin2();

	void clear();

	void Draw(Graphics^ c);
};

