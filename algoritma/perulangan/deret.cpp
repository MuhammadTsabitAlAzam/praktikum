//menampilkan deret 1 3 6 10 15 ...
#include <iostream>
#include "string.h"

using namespace std;

int main()
{	//deklarasi + assigment
	int total = 0;
	
	//deklarasi
	int x;
	
	//assigment
	cout<<"maskkan banyak nilai yang di tampilkan = ";cin>>x;
	
	//perulangan
	for (int i = 1; i <= x; i++)
	{	total=total+i;
		cout<<total<<" ";
	}
	
}
