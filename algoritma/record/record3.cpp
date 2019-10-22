#include <iostream>
using namespace std;

int main()
{	int jumlah;
	typedef struct 
	{
		char nama[30];
		char nim[10];
		string prodi;
	}mahasiswa; 
	
	
	cout<<"berapa banyak mahasiswa yang mau diinputkan = ";cin>>jumlah;
	mahasiswa data[jumlah];
	for (int i = 0; i < jumlah; i++)
	{ cin.ignore();
		cout << "MAHASISWA"<<i+1<<"\n";
		cout << "Nama : " ; cin.getline(data[i].nama, sizeof (data[i].nim));
		cout << "NIM  : " ; cin.getline(data[i].nim, sizeof(data[i].nim));
		cout << "Prodi : "; getline(cin, data[i].prodi);	
	}
}
