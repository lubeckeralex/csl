#include<iostream>
#include"Spiel.h"
#include<time.h>
using namespace std;

Spiel::Spiel()
{
	strcpy(sp[0].name, "Gruen");
	strcpy(sp[1].name, "Gelb");
	strcpy(sp[2].name, "Rot");
	cout << sp[0].name <<endl;
	cout << sp[1].name <<endl;
	cout << sp[2].name <<endl;

	for(int i = 0; i < 41; i++)
	{
		feld[i].pos = i;
		feld[i].besetzt = false;
		cout << feld[i].pos << " : " << feld[i].besetzt << endl;
	}
}

void Spiel::gameOn()
{
	//int x = 0;
	//do
	//{
	//	if(x > 3)
	//	{
	//		x = 0;
	//	}
	//	sp[x].versuch();
	//	x++;
	//}
	//while(sp[x-1].isGewiner == false);

	time_t tim;
	srand( time(&tim) );
	
	for(int i = 0; i < 3; i++)
	{
		int w = rand()%6;
		sp[0].versuch(w);
	}
}