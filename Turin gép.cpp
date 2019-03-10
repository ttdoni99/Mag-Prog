#include <iostream>
using namespace std;

int main()
{
	int b;
	int szamlalo = 0;
	cout<<"Add meg egy decimalis szamot!\n";
	cin >> b;
	cout<<"Unárisban:\n";
	for (int i = 0; i < b; ++i)
	{
		cout<<"1";
		++szamlalo;
		if (szamlalo % 5 == 0) 
		cout<<" ";
	}
	cout<<'\n';
	return 0;
}
