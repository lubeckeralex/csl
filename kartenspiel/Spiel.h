#include"Mannschaft.h"
#include"Feld.h"
class Spiel
{
public:
	Feld feld[41];
	Mannschaft sp[3];

	Spiel();
	void gameOn();
};