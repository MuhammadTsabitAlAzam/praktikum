#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	
	int x;	
		typedef struct
	{
		string harga;
		int jumlah;
	}barang;

	typedef struct
	{
		barang jumlah[100];
		string alamat;
		char tlp[15], 
		jumlahbarang;
		int total_sks = 0;
	}data;


	cout<<"masukkan jumlah mashasiswa = ";cin>>jumlahmhs
	data mahasiswa[10];

		for (int i = 0; i < 10; i++)
	{
		cout<<" = ";cin>>mahasiswa[i].nim;
		cout<<"IPK = ";cin>>mahasiswa[i].ipk;
		cout<<"Jumlah MKA (max 20)= ";cin>>mahasiswa[i].jumlahmka;
			
				for (int j = 0; j < mahasiswa[i].jumlahmka; j++)
				{
					cout<<"MKA"<<j+1<<"\n";
					cout<<"Nama = ";cin>>mahasiswa[i].mhs[j].namamka;
					cout<<"";cin>>mahasiswa[i].mhs[j].sks;
					int mahasiswa[i].total_sks = mahasiswa[i].total_sks + mahasiswa[i].mhs[j].sks
				}
		
		
	}


