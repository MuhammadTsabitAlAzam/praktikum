#include "iostream"
#include "math.h"
using namespace std;

//v tabung
void tabung(float x, float y)
{
	cout<<"Volume Tabung = "<<2*22/7*x*y;
}
//v kerucut
void kerucut(float x, float y)
{
	cout<<"volume kerucut"<<2*22/7*x*y/2;
}
//k L segitiga
void segitiga(float x, float y)
{
	cout<<"Keliling = "<<x+y+(sqrt(x*x+y*y));
	cout<<endl;
	cout<<"Luas = "<<x*y/2;
}
//K L persegi panjang
void persegi(float x, float y)
{
	cout<<"Keliling = "<<(x+y)*2;
	cout<<endl;
	cout<<"Luas = "<<x*y;
}

int main()
{	int pilih;
	float jari, tinggi,alas,lebar,panjang;
	
	while (true)
	{
		cout<<"\n\nHITUNG BANGUN\n1. hitung luas tabung\n2. hitung volume kerucut\n3. Keliling dan luas segitiga\n4. keliling dan luas persegi panjang\n  masukkan pilihan = ";cin>>pilih;
	switch (pilih)
	{
		case 1:
			 cout<<"MENGHITUNG VOLUME TABUNG\n";
			 cout<<"masukkan jari - jari = ";cin>>jari;
			 cout<<"masukkan tinggi = ";cin>>tinggi;
			 tabung(jari,tinggi);
			break;
		case 2:
			 cout<<"MENGHITUNG VOLUME KERUCUT\n";
			 cout<<"masukkan jari - jari = ";cin>>jari;
			 cout<<"masukkan tinggi = ";cin>>tinggi;
			 kerucut(jari,tinggi);
			break;
		case 3:
			 cout<<"MENGHITUNG KELILING DAN LUAS SEGITIGA\n";
			 cout<<"masukkan alas = ";cin>>alas;
			 cout<<"masukkan tinggi = ";cin>>tinggi;
			 segitiga(alas,tinggi);
			
			break;
		case 4:
			 cout<<"MENGHITUNG KELILING DAN LUAS PERSEGI PANJANG\n";
			 cout<<"masukkan panjang = ";cin>>panjang;
			 cout<<"masukkan lebar = ";cin>>lebar;
			 persegi(lebar,panjang);
			break;
		default:
			cout<<"Pilihan anda salah";
	}
	}
	
	
}






















