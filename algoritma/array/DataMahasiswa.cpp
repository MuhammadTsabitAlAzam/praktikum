//created by Dio Cahyo Saputro
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
main ()
{
	int i,j,JMah,nim[100],nilai[100][100],JMatkul;
	char nama[50][100];
	char NamMatkul[50][100][100];
	cout<<setw(27)<<setfill(' ')<<"INPUT\n";
	cout<<setw(50)<<setfill('=')<<"=\n\n";
	cout<<"\t\tDATA MAHASISWA\n";
	cout<<setw(49)<<setfill('=')<<"=\n";
	cout<<"\nMasukkan Jumlah Mahasiswa : ";cin>>JMah;
	for(i=1;i<=JMah;i++)
	{
		cout<<"\nMahasiswa ke-"<<i<<endl;
		cin.ignore();
		cout<<"\nNama\t\t: ";cin.getline(nama[i],50);
		cout<<"NIM\t\t: ";cin>>nim[i];
		cout<<"Jumlah Matkul\t: ";cin>>JMatkul;
		for(j=1;j<=JMatkul;j++)
		{
			cout<<"\n\tMatKul ke-"<<j;
			cin.ignore();
			cout<<"\n\n\tNama MatKul\t: ";cin.getline(NamMatkul[i][j],50);
			cout<<"\tNilai\t\t= ";cin>>nilai[i][j];
		}
	}
	cout<<endl;
	cout<<setw(27)<<setfill(' ')<<"OUTPUT\n";
	cout<<setw(50)<<setfill('=')<<"=\n\n";
	cout<<"\t\tDATA MAHASISWA\n";
	cout<<setw(49)<<setfill('=')<<"=\n";
	for(i=1;i<=JMah;i++)
	{
		cout<<"\nMahasiswa ke-"<<i;
		cout<<"\n\nNama\t\t: "<<nama[i];
		cout<<"\nNIM\t\t: "<<nim[i];
		cout<<"\nJumlah Matkul\t: "<<JMatkul;
		for(j=1;j<=JMatkul;j++)
		{
			cout<<"\n\n\tMatKul ke-"<<j;
			cout<<"\n\n\tNama MatKul\t: "<<NamMatkul[i][j];
			cout<<"\n\tNilai\t\t= "<<nilai[i][j];
		}
	}
}
