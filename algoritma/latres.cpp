#include <iostream>
#include <string.h>

using namespace std;

char nama[100][100];
string nim[100],ipk[100];
int urut = 0;
void input()
{
	int jumlah;
	cout<<"\nINPUT MAHASISWA\n";
	cout<<"Jumlah Mahasiswa = ";cin>>jumlah;
	
	for (int i = 0; i < jumlah; i++)
	{
		cout<<"\nMahasiswa ke urut "<<urut+1;
		cin.ignore();
		cout<<"\nNama = ";cin.getline(nama[urut],sizeof(nama[urut]));
		cout<<"Nim = ";cin>>nim[urut];
		cout<<"IPK = ";cin>>ipk[urut];
		urut++;
	}
	
}

void output()
{
	cout<<"\nOUTPUT MAHASISWA\n";
	for (int i = 0; i < urut; i++)
	{	cout<<"\nMahasiswa ke "<<i+1;
		cout<<"\nNama = "<<nama[i];
		cout<<"\nNim = "<<nim[i];
		cout<<"\nIPK = "<<ipk[i];
	}	
}

void cari()
{	
	cout<<"\nOUTPUT MAHASISWA\n";
	char cari[100];
	int ketemu = false;
	cin.ignore();
	cout<<"masukkan nama yang dicari = ";cin.getline(cari, sizeof(cari));
	for (int i = 0; i < urut; i++)
	{
		if (strstr(nama[i],cari))
		{
			cout<<"\nMahasiswa ke "<<i+1;
			cout<<"\nNama = "<<nama[i];
			cout<<"\nNim = "<<nim[i];
			cout<<"\nIPK = "<<ipk[i];
			ketemu = true;
		}
	}
	if (ketemu== false)
	{
		cout<<"data tidak ditemukan";
	}
	
	
}


int main()
{

	while (true)
	{
		int pilih;
			cout<<"\n\nDATA MAHASISWA\nPilih salah satu\n1. Input Mahasiswa\n2. Output Mahasiswa\n3. Cari\n4. Keluar\n Pilih = ";cin>>pilih;
		switch (pilih)
		{
			case 1:
				input();
				break;
			case 2:
				output();
				break;
			case 3:
				cari();
				break;
			case 4:
				exit(0);
				break;	
			default:
				cout<<"pilihan anda salah";
		}
		
	}	
	
}
