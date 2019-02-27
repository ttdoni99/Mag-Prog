#include <iostream>
using namespace std;

int main()
{
	/*2. Mutassuk meg, hogy milyen hosszú a gépünkön egy gépi szó. Használjuk a bitshift operátort. Pl:
int = 1;
Számoljuk meg, hogy az a <<= 1; kifejezés hány lépés után lesz hamis (azaz a == 0);*/
	int i = 1;
	int s = 0;
	while (i != 0)
	{
		i <<= 1;
		cout << i;
		s = s + 1;
	}

	cout << "\n"
		 << s;
}
