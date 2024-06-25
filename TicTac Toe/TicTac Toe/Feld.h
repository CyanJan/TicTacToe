#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing;

class Feld
{
private:
	bool Cross;
	bool Circle;

	int xPos;
	int yPos;

	int size;

public:

			 Feld		(int pxPos, int pyPos);
	bool	 getCross	();
	bool	 getCircle	();
	bool	 checkempty ();

	void	 setCross();
	void	 setCircle();

	void	 clear();
	void	 draw		(Graphics^ c);
};

