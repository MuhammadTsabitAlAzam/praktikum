//untuk menampilkan nilai dari i sampai ke > 0
#include <iostream>

using namespace std;

int main()
{
	int i;//deklarasi
	
	//pemberian nilai dinamis
	cout<<"masukkan angka positif= ";cin>>i;
	
	//perulangan menggunakan while
	while (0 < i)//kondisi
	{
		cout<<i<<endl;//statement
		i--;
	}

}

/*keterangan enguunaan while
statement akan dijalankan jika bernilai true

inisialisasi;
while (kondisi)
{
	statement;
	increment;
}
*/
