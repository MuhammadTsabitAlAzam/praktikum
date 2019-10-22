#include <iostream>
using namespace std;

int bilangan(int a, int b, int parameter);


int main()
{
	int x,a,b,parameter;
	
	cout << "x = "; cin >> x;
	
	a = x;//untuk turun
	b = x;//untuk naik
	parameter = 1;
	cout << "Output = " << bilangan(a,b,parameter) << endl;
}

int bilangan(int a, int b, int parameter)
{
	if (a>=0)
	{
			if(parameter%2 == 0)
		{
			cout<<a;
			return bilangan (a--,b,parameter++);
		}
		else
		{
			cout<<b;
			return bilangan (a,b++,parameter++);
		}
	}
	else
	{
		return 0;
	}
	
}
