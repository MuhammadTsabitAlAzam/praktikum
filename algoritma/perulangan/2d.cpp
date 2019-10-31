#include <iostream>


using namespace std;

int main()
{
	while (true)
	{
		int x;
		cout<<"masukkan jumlah = ";cin>>x;
	cout<<"\n\nLv.1 (SEGITIGA SIKU KIRI BAWAH)\n\n";	
		//segitiga siku kiri bawah
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j <= i; j++)
			{
				cout<<"X ";
			}
			cout<<"\n";
		}
	cout<<"\n\nLv.2 (SEGITIGA SIKU KIRI ATAS)\n\n";
		//segitiga siku kiri atas
		for (int i = 0; i < x; i++)
		{
			for (int j = i; j < x; j++)
			{
				cout<<"X ";
			}
			cout<<endl;
		}
	cout<<"\n\nLv.3 (SEGITIGA SIKU KANAN BAWAH)\n\n";	
		//segitiga siku kanan bawah
		for (int i = 0; i < x; i++)
		{	
			//bayangan
			for (int j = i; j < x-1; j++) //x-1 dimaksudkan biar rapi aja sih :v
			{
				cout<<"  ";
			}
			//output x
			for (int j = 0; j <= i ; j++)
			{
				cout<<"X ";
			}
			cout<<"\n";
			
		}
	cout<<"\n\nLv.4 (SEGITIGA SIKU KANAN ATAS)\n\n";	
		//siku kanan atas
		for (int i = 0; i < x; i++)
		{
			//bayangan
			for (int j = 0; j < i; j++)
			{
				cout<<"  ";
			}
			//keluaran
			for (int j = i; j < x; j++)
			{
				cout<<"X ";
			}
			cout<<"\n";
			
			
		}
	cout<<"\n\nLv.5 (Segitiga sama kaki)\n\n";	
		//segitiga sama kaki
		for (int i = 0; i < x; i++)
		{
			//bayangan
			for (int j = i; j < x-1; j++)
			{
				cout<<"  ";
			}
			//segitiga awal
			for (int j = 0; j <= i ; j++)
			{
				cout<<"X ";
			}
			//segitiga akhir
			for (int j = 0; j <i ; j++)
			{
				cout<<"X ";
			}
			cout<<"\n";			
		}
	cout<<"\n\nLv. 6 (BELAH KETUPAT)\n\n";
		//belalh ketupat
		{	
			//belah ketupat atas
			for (int i = 0; i < x; i++)
			{
				//bayangan
				for (int j = i; j < x-1; j++)
				{
					cout<<"  ";
				}
				//kiri atas
				for (int j = 0; j <= i; j++)
				{
					cout<<"X ";
				}
				//kanan atas
				for (int j = 0; j < i ; j++)
				{
					cout<<"X ";
				}
				
			cout<<"\n";
				
			}
			//belah ketupat bawah
			for (int i = 0; i < x; i++)
			{
					//bayangan
				for (int j = 0; j <=i ; j++)
				{
					cout<<"  ";
				}
				for (int j = i; j < x-2; j++)
				{
					cout<<"X ";
				}
				for (int j = i; j <x-1 ; j++)
				{
					cout<<"X ";
				}
				cout<<"\n";
				
			}
		}	
		cout<<"\n";
	}	
}
