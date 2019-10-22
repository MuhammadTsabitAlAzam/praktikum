//menampilkan persegi dengan menggunakan nested for
#include <iostream>
#include "string.h"

using namespace std;

int main()
{	//deklarasi
	int sisi;
	
	//pemberian nilai
	cout<<"masukkan panjang = ";cin>>sisi;
	
	//perulangan
	for (int i = 0; i < sisi; i++)
	{
		for (int j = 0; j < sisi; j++)
		{
			cout<<"X ";
		}
		cout<<endl;
	}
	
}
