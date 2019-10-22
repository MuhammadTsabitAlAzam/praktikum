// penitipan mamalia

#include <iostream>
#include <string.h>

using namespace std;

void penitipan();
void pengambilan();
void tampil();
void tampil_data_tunggal(int i);

typedef struct
{
	string nama, jenis;
}data;

typedef struct
{
 string nama;
 int kode;
 int jumlah, durasi, total;
 data hewan[4];
}data2;
 
 data2 penitip[30];
 data2 bekas[50];
 int antrian = 0, riwayat = 0, ambil;
 int stack;
 
int main()
{
	int pilih;
	do
	{
		cout<<"\n=================================================\nMenu \n1. Penitipan\n2. Pengambilan\n3. Tampil Data\n  pilih = ";cin>>pilih;
		//system("cls");
		switch (pilih)
		{
			case 1:
			if (antrian== 30)
			{
				cout<<"Tempat untuk menampung sudah penuh";
			}else
			{
				cout<<"\nPENITIPAN\n";
				penitipan();
			}
				
				break;
			case 2:
				cout<<"\nPENGAMBILAN\n";
				pengambilan();
				break;
			case 3:
				cout<<"\nTAMPIL DATA\n";
				tampil();
				break;
			
			default:
				cout<<"maaf input anda salah";
		}
			
	} while (true);
	
	//jenis hewan : aves
	//, mamalia, 
	
	//kapan masuk
	//kapan keluar
	
	//penyimpanan uang masih masuk
	//riwayat penggunaan
	
	
	
	
}


void penitipan()
{   cout<<"Penitip "<<antrian+1<<"\n";
	cout<<"Nama = ";cin>>penitip[antrian].nama;
	cout<<"Durasi (hari) = ";cin>>penitip[antrian].durasi;
	cout<<"Jumlah Hewan (max 4)= ";cin>>penitip[antrian].jumlah;
	if (penitip[antrian].jumlah>4)
	{
		cout<<"\"hewan anda terlalu banyak, hewan yang kami terima 4 ekor, terimakasih\"";
		penitip[antrian].jumlah = 4;
	}
	//operasi
	penitip[antrian].kode = 1000 + (((stack++)+1)*10)+penitip[antrian].jumlah;
	penitip[antrian].total = 20000*penitip[antrian].durasi*penitip[antrian].jumlah;
	
	for (int i = 0; i <penitip[antrian].jumlah; i++)
	{	cout<<"\t\nhewan "<<i+1<<"\n";;
		cout<<"\tjenis hewan\t= ";cin>>penitip[antrian].hewan[i].jenis;
		cout<<"\tnama hewan\t= ";cin>>penitip[antrian].hewan[i].nama;
	}
	cout<<"Kode_pelanggan = "<< penitip[antrian].kode;
	cout<<"\nTotal Biaya = "<<penitip[antrian].total;
	antrian++;
	if (stack == 99)
	{
		stack =0;
	}	
}

void pengambilan()
{
	char hapus;
	bool found;
	cout<<"masukan kode yang akan diambil = ";cin>>ambil;
	for (int i = 0; i < antrian; i++)
	{
		if (ambil == penitip[i].kode)
		{
			tampil_data_tunggal(i);
			cout<<"\n\napakah data benar dan ingin dibapus (y/n)? ";cin>>hapus;
			if (hapus == 'y'||hapus == 'Y')
			{   bekas[riwayat]=penitip[i];
				bekas[riwayat].kode+=1000;
				for (int j = i; j < antrian; j++)
				{
					penitip[j]= penitip[j+1];
				}
				antrian --;
				riwayat ++;
				found = true;
			}
		}
		
	}
	if (found == false)
	{
			cout<<"\ndata tidak ditemukan\n";	
	}
	
	
	
}

void tampil_data_tunggal(int i)
{
	cout<<"nama = "<<penitip[i].kode;
	cout<<"\n kode = "<<penitip[i].kode;
	cout<<"\n durasi = "<<penitip[i].durasi;
	for (int i = 0; i < penitip[i].jumlah; i++)
	{  cout<<"\nHewan  "<<i+1;
		cout<<"\n\tJenis = "<<penitip[i].hewan[i].jenis;
		cout<<"\n\tNama = "<<penitip[i].hewan[i].nama;
	}
	
	//kode, jumlah, durasi,total
	
}

void tampil()
{
	//tampil pelanggan
	for (int i = 0; i < antrian; i++)
	{	cout<<"\n\nPenitip = "<<i+1;
		cout<<"\nkode = "<<penitip[i].kode;
		cout<<"\nnama = "<<penitip[i].nama;
		cout<<"\ndurasi = "<<penitip[i].durasi;
		cout<<"\nHarga = "<<penitip[i].total;
		for (int j = 0; j < penitip[i].jumlah; j++)
		{
			cout<<"\nHewan "<<j+1;
			cout<<"\n\tJenis = "<<penitip[i].hewan[j].jenis;
			cout<<"\n\tNama = "<<penitip[i].hewan[j].nama;
		}
	}
cout<<"\n==========================================================================\n";
	//tampil riwayat
	for (int i = 0; i < riwayat; i++)
	{	cout<<"\n\nPengambil "<<i+1;
		cout<<"\nkode = "<<bekas[i].kode;
		cout<<"\nnnama = "<<bekas[i].kode;
		cout<<"\ndurasi = "<<bekas[i].durasi;
		cout<<"\nHarga"<<bekas[i].total;
		for (int j = 0; j < bekas[i].jumlah; j++)
		{   cout<<"\nHewan "<<i+1;
			cout<<"\n\tJenis = "<<bekas[i].hewan[j].jenis;
			cout<<"\n\tNama = "<<bekas[i].hewan[j].nama;
		}	
	}
}
