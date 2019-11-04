//belajar array
#include <iostream>

using namespace std;
int main()
{
	// tipe_var nama_var[index];
	
	int index;
	cout<<"masukkan banyak mahasiswa = ";cin>>index;
	string nama[index];
	
	cout<<"input mahasiswa\n";
	for (int i = 0; i < index; i++)
	{
		cout<<"masukkan nama mahasiswa ke-"<<i<<" = ";cin>>nama[i];
	}
	
	cout<<"\noutput mahasiswa\n";
	for (int i = 0; i < index; i++)
	{
		cout<<nama[i]<<endl;
	}
	
	
	
}


