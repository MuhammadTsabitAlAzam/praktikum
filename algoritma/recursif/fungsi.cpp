	#include <iostream>
	using namespace std;

	float luas(float alas, float tinggi);

	int main()
	{
		float n, m;
		cout << "n : "; cin >> n;
		cout << "m : "; cin >> m;*
		cout <<"luas = "<< luas(n,m);
	}

	float luas(float a,float t)
	{
		return (a * t)/2;
	}

		
