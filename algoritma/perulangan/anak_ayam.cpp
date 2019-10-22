//menampilkan anak ayam
#include <iostream>
#include "string.h"

using namespace std;

int main()
{	//deklarasi variabel
	int jumlah;
	char pemilik [20];
	
	//pemberian nilai
	cout<<"masukkan jumlah anak ayam = ";cin>>jumlah;
	cin.ignore();
	cout<<"masukkan nama pemilik = ";cin.getline(pemilik,sizeof(pemilik));
	
	//perulangan
	for (int i = jumlah; i > 0 ; i--)
	{
		cout<<"anak ayam turun "<<i;
		//pengendalian
		if (i == 1)
		{
			cout<<" mati 1 "<<pemilik<<" menjadi galauu -_-";
		}else
		{
			cout<<" mati 1 tingallah "<<i-1;
		}
		cout<<"\n";
	}
	

}
