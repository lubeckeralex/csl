#include<iostream>
#include<string.h>
using namespace std;


enum kartenArt{Eichel, Gruen, Herz, Schellen};


struct Kart
{
	int karteNummer;
	int kArt;
	int wert;
	//char *kartArt;
};



void kartInit(struct Kart *karte, int x)
{
	int locKArt = 0; // 0=Eichel, 1=Gruen, 2=Herz, 3=Schellen
	int j = 2;// Kartenpreis
	int bis13 = 0;
	int i = 0;

	for(int a = 0; a < x; a++)
	{
		if(locKArt == 4)
		{
			locKArt = 0;
		}
		if(j == 14)
		{
			j = 0;
		}
		
		karte[a].karteNummer = a;
		karte[a].wert = j;
		karte[a].kArt = locKArt;
		j++;
		locKArt++;
	}
}


void kartOut()
{
	
}

int main()
{
	char arr[50][7] = {"Bube", "Dame", "Koenig"};
	char arr2[10];

	const int kartAnz = 52;
	
	
	struct Kart newKart[52];
	
	kartInit(newKart, 52);

	//cout << newKart[12].wert << endl;
	//cout << newKart[12].kArt << endl;



	for(int i = 0; i < 52; i++)
	{
		cout << newKart[i].wert << endl;
	}

	cout << endl;
	cout << endl;

		for(int i = 0; i < 52; i++)
	{
		cout << newKart[i].kArt << endl;
	}


	return 0;

}