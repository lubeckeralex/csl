#include<iostream>
#include<cstring>
#include"Figur.h"
using namespace std;

class Spieler
{
public:
	bool isGewiner;
	string name;
	Figur figure[4];
	Spieler();

	void action();

};