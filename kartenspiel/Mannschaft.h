#include<iostream>
#include<cstring>
#include"Figur.h"
using namespace std;

class Mannschaft
{
public:
	bool isGewiner;
	char name[20];
	Figur figure[4];

	Mannschaft();

	void versuch(int);

	//Figur getFig(int);
};