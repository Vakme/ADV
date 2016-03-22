#include"Zad3.h"

int main()
{
	Alokator<int> a1;

	int *tab = a1.alokuj(5);

	for(int i=0; i<5; i++)
	{
		a1.skonstruuj(tab + i, i);
		a1.zniszcz(tab + i);
	}

	a1.dealokuj(tab, 5);	

	Alokator<std::string> a2;

	std::string *str = a2.alokuj(2);

	a2.skonstruuj(str + 0, "foo");
	a2.skonstruuj(str + 1, "boo");
	
	a2.zniszcz(str);
	a2.zniszcz(str+1);
	a2.dealokuj(str,2);
	
//To jest blok testowy. Jeśli chcecie, możecie zakomentować blog wyżej i "pobawić się", w odkomentowywanie tych linijek, porównując je z wyjściem valgrinda. //
	/*a2.dealokuj(str, 1);
	a2.wypisz(*(str+1));
	a2.zniszcz(str);
	a2.zniszcz(str+1);
	a2.dealokuj(str+1,1);*/
}


/* Output:
Tworzę alokator
Alokuję przestrzeń na 5 elementów
Inicjuję element o adresie 0x165a010
Niszczę element o adresie 0x165a010
Inicjuję element o adresie 0x165a014
Niszczę element o adresie 0x165a014
Inicjuję element o adresie 0x165a018
Niszczę element o adresie 0x165a018
Inicjuję element o adresie 0x165a01c
Niszczę element o adresie 0x165a01c
Inicjuję element o adresie 0x165a020
Niszczę element o adresie 0x165a020
Dealokuję przestrzeń 5 elementów o adresie 0x165a010
Tworzę alokator
Alokuję przestrzeń na 2 elementów
Inicjuję element o adresie 0x165a010
Inicjuję element o adresie 0x165a018
Niszczę element o adresie 0x165a010
Niszczę element o adresie 0x165a018
Dealokuję przestrzeń 2 elementów o adresie 0x165a010
*/
