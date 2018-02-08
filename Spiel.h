#include"Spieler.h"

class Spiel
{
public:
	int map[40];
	Spieler sp[3];
	Spiel(Spieler, Spieler, Spieler);
	void gameOn();
};