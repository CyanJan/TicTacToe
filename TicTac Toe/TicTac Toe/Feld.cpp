#include "Feld.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing;

Feld::Feld(int pxPos, int pyPos)
{
	Cross	= false;
	Circle	= false;

	xPos	= pxPos;
	yPos	= pyPos; 

	size	= 50;
}

bool Feld::getCross()
{
	if (Cross == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Feld::getCircle()
{
	if (Circle == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Feld::checkempty()
{
	if(Circle == false && Cross == false)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Feld::setCross()
{
	Cross = true;
}

void Feld::setCircle()
{
	Circle = true; 
}

void Feld::clear()
{
	Cross = false;
	Circle = false;
}

void Feld::draw(Graphics^ c)
{
	Pen^ p   = gcnew Pen	(Color::White, 1 );
	Pen^ p2 = gcnew Pen	(Color::Blue, 3  );
	Pen^ p3 = gcnew Pen	(Color::Red, 3   );
	
	c->DrawRectangle        (p, xPos, yPos, size, size);

	if (Cross == true)
	{
		c->DrawLine(p2, xPos, yPos, xPos + 50, yPos + 50);
		c->DrawLine(p2, xPos + 50, yPos, xPos, yPos + 50);
	}
	if (Circle == true)
	{
		c->DrawEllipse(p3, xPos, yPos, 50, 50);
	}
}
