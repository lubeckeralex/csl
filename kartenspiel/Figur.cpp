#include<iostream>
#include"Figur.h"
using namespace std;

Figur::Figur()
{
	position = 0;
	prioritet = 0;
	inGame = false;
	isSave = false;

}

void Figur::move(int srt)
{
	position = position + srt;
	prioritet = prioritet + srt;
	cout << "Ich bewege mich um: "<< srt << " position: " << position << endl;

}

//void Figur::setPrior()
//{
//	
//}