#include <iostream>
#include <string.h>
#include <stdlib.h>
//#include <stdio.h >
//#include <conio.h>

using namespace std;

void input();
void output();
void rata();
void sorting();
	
		int k =0, banyak;
		typedef struct{
			int nim;
			float nilai;
			string nama;
		}data;
		data mhs[100];

FILE *algo_1;
FILE *algo_2;
FILE *algo_3;

int main()
{int pilih;
	int ulang = true;	
	do
	{
		cout<<"\nMENU\n1. Input Data\n2. Output Data\n3. Rata-rata\n4. Keluar\n  Pilih = ";cin>>pilih;
	system("cls");
	
	
	switch (pilih)
	{
		case 1:
		
			cout<<"INPUT DATA\n";
			input();
		
			break;
			case 2:
			cout<<"OUTPUT DATA\n";
			output();
			break;
			case 3:
			cout<<"RATA RATA";
			rata();		
			break;
			case 4:
			exit(0);
			break;
		default:
			cout<<"pilihan yang anda masukkan tidak ada";
		}
	} while (ulang== true);	
}


void input()

{
	cout<<"banyak data mahasiswa = ";cin>>banyak;
	algo_1= fopen("data.txt","a");
	algo_2= fopen("data2.txt","r");
	fread(&k,sizeof(k),1,algo_2);
	for (int i = 0; i < banyak ; i++)
	{
		cout<<"\nNama  = ";cin>>mhs[k].nama;
		cout<<"NIM   = ";cin>>mhs[k].nim;
		cout<<"Nilai = ";cin>>mhs[k].nilai;
		fwrite(&mhs[k],sizeof(mhs[k]),1,algo_1);
		k++;
	}
	
	fclose(algo_1);
	fclose(algo_2);
	algo_2= fopen("data2.txt","w");
	fwrite(&k,sizeof(k),1,algo_2);
	fclose(algo_2);
	sorting();
}

void sorting()
{
	algo_1= fopen("data.txt","r");
	algo_3= fopen("data3.txt","w");
	algo_2= fopen("data2.txt","a");
	fread(&k,sizeof(k),1,algo_2);
	fread(&mhs,sizeof(mhs),1,algo_1);
	int temp;
	string temp2;
	float temp3;
	for (int i = 0; i < k-1; i++)
	{
		for (int j = 0; j < k-1-i; j++)
		{
			if (mhs[j].nim > mhs[j+1].nim)
			{
				temp = mhs[j].nim;
				mhs[j].nim = mhs[j+1].nim;
				mhs[j+1].nim = temp;
				
				temp2 = mhs[j].nama;
				mhs[j].nama = mhs[j+1].nama;
				mhs[j+1].nama = temp2;
				
				temp3 = mhs[j].nilai;
				mhs[j].nilai = mhs[j+1].nilai;
				mhs[j+1].nilai = temp3;
				
			}
		}
		
	}
	fwrite(&mhs,sizeof(mhs),1,algo_3);
	fclose(algo_1);
	fclose(algo_3);
	fclose(algo_2);
}
void output()
{ 
	algo_3 = fopen("data3.txt","r");
	fread(&mhs,sizeof(mhs),1,algo_3);
	algo_2= fopen("data2.txt","r");
	fread(&k,sizeof(k),1,algo_2);
	
	for (int i = 0; i <k; i++)
	{
		cout<<"\n\nNama  = "<<mhs[i].nama;
		cout<<"\nNIM   = "<<mhs[i].nim;
		cout<<"\nNilai = "<<mhs[i].nilai;
	}
	fclose(algo_3);
	fclose(algo_2);	
}

void rata()
{
	float rata;
	algo_3 = fopen("data3.txt","r");
	algo_2= fopen("data2.txt","r");
	fread(&k,sizeof(k),1,algo_2);
	float total=0;
	int n = 1;
	
	for (int i = 0; i < k; i++)
	{
		
		if (mhs[i].nim == mhs[i+1].nim)
		{
			total = total + mhs[i].nilai;
			n=n+1;
			
		}
		else
		{
			total = total + mhs[i].nilai;
			rata = total / n;
			n = 1;
			total = 0;
					cout<<"\n\nnama = "<<mhs[i].nama;
					cout<<"\nnim = "<<mhs[i].nim;
					cout<<"\nrata rata = "<<rata;
		}
	}
	fclose(algo_3);
	fclose(algo_2);
}
