#include <iostream>

using namespace std;

int main()
{ 
	int x,index1, index2;
	cout<<"masukkan nilai ";cin>>x;
		//belalh ketupat
		{	
			//belah ketupat atas
			for (int i = 0; i < x; i++)
			{
				index1=1;
				//bayangan
				for (int j = i; j < x-1; j++)
				{
					cout<<"  ";
				}
				//kiri atas
				for (int j = 0; j <= i; j++)
				{
					cout<<index1++<<" ";
				}
				//kanan atas
				index2=index1-2;
				for (int j = 0; j < i ; j++)
				{
					cout<<index2--<<" ";
				}
				
			cout<<"\n";
				
			}
			//belah ketupat bawah
			for (int i = 0; i < x; i++)
			{	index1=1;
					//bayangan
				for (int j = 0; j <=i ; j++)
				{
					cout<<"  ";
				}
				for (int j = i; j < x-2; j++)
				{
					cout<<index1++<<" ";
				}
				index2=index1;
				for (int j = i; j <x-1 ; j++)
				{
					cout<<index2--<<" ";
				}
				cout<<"\n";
				
			}
		}	
		cout<<"\n";
	}
	
