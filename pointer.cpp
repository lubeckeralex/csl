#include<iostream>
using namespace std;


void arrInit(int *arr, int length);
void arrKopi(int *a, int *b, int length);
void fibInit(int *arr, int length);



int main()
{
	const int length = 40;
	int a[length];
	int b[length];
	
	arrInit(a, length);
	
	for(int i = 0; i<length; i++)
	{
		cout << "Arr A von a[" << i << "]" << " nach dem arrInit(a, length); = " << a[i] << endl;
	}
	
	cout << endl;
	cout << endl;
	
	arrKopi(a, b, length);

		for(int i = 0; i<length; i++)
	{
		cout << "Arr B von b[" << i << "]" << " = nach dem arrKopi(a, length);  " << b[i] << endl;
	}
	
	

	cout << endl;
	cout << endl;


	fibInit(a, length);
	
	for(int i = 0; i<length; i++)
	{
		cout << "Arr A von a[" << i << "]" << " nach dem fibInit(a, length); = " << a[i] << endl;
	}
	
	cout << endl;
	cout << endl;
	
	arrKopi(a, b, length);
	
	cout << endl;
	cout << endl;


		for(int i = 0; i<length; i++)
	{
		cout << "Arr B von b[" << i << "]" << " = nach dem arrKopi(a, length);  " << b[i] << endl;
	}
}



void arrInit(int *arr, int length)
{
	for(int i = 0; i < length; i++)
	{
		arr[i] = 0;
	}
}

void arrKopi(int *a, int *b, int length)
{
	for(int i = 0; i < length; i++)
	{
		b[i] = a[i];
	}
}


void fibInit(int *arr, int length)
{
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 1;
	for(int i = 2; i < length; i++)
	{
		arr[i] = arr[(i-1)] + arr[i-2];
	}
}
