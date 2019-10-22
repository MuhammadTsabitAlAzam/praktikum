#include <iostream>

using namespace std;
long double rekursif(float f);


int main()
{float x;
	cout<<"masukkan nilai rekursif =";cin>>x; 
	cout<<"nilai "<<x<<" = "<<rekursif(x);
}

long double rekursif(float f)
{
if (f == 0)
	return 0;
else
	return f+rekursif(f-1)/2;
}




