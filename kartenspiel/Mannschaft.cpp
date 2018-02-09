#include"Mannschaft.h"

using namespace std;

Mannschaft::Mannschaft()
{
	figure[0].
	isGewiner = false;
}



void Mannschaft::versuch(int w)
{


	cout << "w : " << w << endl;

	if((w == 6) && (figure[0].position == 0 || figure[1].position == 0 || figure[2].position == 0 || figure[3].position == 0))
	{
		for(int i = 0; i < 4; i++)
		{
			figure[i].position = 1;
			cout << "bewege Figure " << i << endl;
			figure[i].prioritet = 100;
			break;
		}
	}
	else
	{
		int p = -1;
		int x = 0;

		for(int i = 0; i < 4; i++)
		{
			if(figure[i].prioritet > p)
			{
				p = figure[i].prioritet;
				x = i;
			}		
		}
		figure[x].move(w);
	}
}

//Figur Mannschaft::getFig(int w)
//{
//
// 
//}