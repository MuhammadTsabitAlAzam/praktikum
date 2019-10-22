
//indeks dibuat flexibel
//input data perulangan



#include <iostream>
#include <stdlib.h> //library system dan exit
#include <malloc.h>

using namespace std;

typedef struct typedata *typeptr;//pelaljari maksud semua ini
struct typedata
{
	int info, indeks;
	typeptr prev, next;
};

typeptr depan,belakang;

void dequeue();
void pop();
void cetak_data();
int data_kosong();
void input(int); 
int i=0;



int main()
{
	int pilih,pilih2,data;
	char inp;
	while (true)
	{
		cout<<"MAIN MENU\n1. Masukkan Data\n2. Hapus Data\n3. Cetak Data\n4. Keluar\n   Plilh = ";cin>>pilih;
system("clear");// beda geany beda rasa
		switch (pilih)
		{
			case 1 :
				cout<<"\nMASUKKAN DATA\n";		
				do
				{
					cout<<"masukkan data = ";cin>>data;
					input(data);
				cout<<"input lagi (y/n) = ";cin>>inp;
				} while (inp == 'y' ||inp == 'Y');
						
				break;
				
			case 2 :
				cout<<"\nHAPUS DATA\n";
				cout<<"1. secara POP\n2. secara DEQUEUE\n  pilih = ";cin>>pilih2;
				switch (pilih2)
				{
					case 1 :
						cout<<"hapus data POP";
						pop();
						cout<<"\ndata berhasi dihapus";
						break;
					case 2 :
						cout<<"hapus data DEQUEUE";
						dequeue();
						cout<<"\ndata berhasil dihapus";
						break;
					default:
						cout<<"\ngiamana to, masukan anda salah";
						
				}
				break;
				
			case 3 :
				cout<<"\nCETAK DATA\n";
				cetak_data();
				break;
				
			case 4:
				exit(0);
				break;
			
			default:
			cout<<"\nPILIHAN YANG ANDA MASUKKAN SALAH T.T";
				
		}
	}
}


void buat_data()
{
	depan=NULL;
	belakang=NULL;
}

int data_kosong()
{
	if(depan==NULL)
	{
		return true;
	}else
	{
		return false;
	}
}

void dequeue()
{
	typeptr hapus, bantu;
	if(data_kosong())
	{
		cout<<"Data underflow"<<endl;
	}else
	{
		hapus=depan;
		depan=hapus->next;
		i--;
		bantu=depan;
		int a=1;
		while(a<=i)
		{
			bantu->indeks=a;
			bantu=bantu->next;
			a++;
		}
		
		free(hapus);
		depan->prev=NULL;
		cout<<"dequeue DONE"<<endl;
	}
}

void pop()
{
	typeptr hapus, bantu;
	if(data_kosong())
	{
		cout<<"Data underflow"<<endl;
	}else
	{
		bantu=depan;
		hapus=belakang;
		if(hapus==depan)
		{
			depan=NULL;
			i--;
		}else
		{
			i--;
			while(bantu->next->next!=NULL)
			{
				bantu=bantu->next;
			}
			belakang=bantu;
			belakang->next=NULL;
		}
		free(hapus);
		cout<<"POP DONE"<<endl;
	}
}


void input(int IB)
{
	typeptr NS;
	NS=(typedata *)malloc(sizeof(typedata));
	NS->info=IB;
	if(depan==NULL)
	{
		depan=NS;
		depan->prev=NULL;
		i++;
		NS->indeks=i;
		
	}else
	{
		i++;
		belakang->next=NS;
		NS->prev=belakang;
		NS->indeks=i;
	}
	belakang=NS;
	belakang->next=NULL;
}

void cetak_data()
{
	
	typeptr bantu;
	
	
	bantu=depan;
	cout<<"Indeks   Info"<<endl;
	while(bantu!=NULL)
	
	{
	cout<<"   "<<bantu->indeks<<"      "<<bantu->info<<endl;
	bantu=bantu->next;
	}
				
}
