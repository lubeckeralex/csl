#include<iostream>
#include"Spiel.h"
using namespace std;

Spiel::Spiel(Spieler sp1, Spieler sp2, Spieler sp3)
{
	sp[0] = sp1;
	sp[1] = sp2;
	sp[2] = sp3;

	for(int i = 0; i < 40; i++)
	{
		map[i] = i;
	}
}

void Spiel::gameOn()
{
	int x = 0;
	do
	{
		if(x > 3)
		{
			x = 0;
		}
		sp[x].action();
		x++;
	}while(sp[x-1].isGewiner == false);

	cout sp[x-1].name << endl;
	
}