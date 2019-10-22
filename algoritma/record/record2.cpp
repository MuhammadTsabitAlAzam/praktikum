#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	
	typedef struct
	{
		string namamka;
		int sks;
	}mka;

	typedef struct
	{
		mka mhs[10];
		char nim[10];
		int ipk, jumlahmka;
	}data;

	data mahasiswa[10];
	
for (int i = 0; i < 10; i++)
{
	cin>>mahasiswa[i].nim;
	cin>>mahasiswa[i].ipk;
	cin>>mahasiswa[i].jumlahmka;
		for (int j = 0; j < mahasiswa[i].jumlahmka; j++)
		{
			cin>>mahasiswa[i].mhs[j].namamka;
			cin>>mahasiswa[i].mhs[j].sks;
		}
		
		
}
}
