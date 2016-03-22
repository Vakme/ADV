//Stworz potrzebne pliki tak, aby program wykonywal sie i wypisywal zadany output.

//Poniżej tworzysz obiekt klasy Drink, która rozlewa napój[l] do zadanych pojemników: bottle - 2l, cup - 0.25 l i can - 0.5 l w zależności od tego, jaki przechowuje stan

#include"Zad1.h"

int main()
{
	std::cout << "How much containers you have to prepare to pour Pepsi?" << std::endl;
	Drink::arg state = Drink::can;
	Drink Pepsi = Drink(state);
	std::cout << Pepsi(30) << Pepsi.get_measure() << std::endl;
	Pepsi.set_bottle();
	std::cout << Pepsi(45) << Pepsi.get_measure() << std::endl;
	Pepsi.set_cup();
	std::cout << Pepsi(2) << Pepsi.get_measure() << std::endl;
}

/* Output: 
How much containers you have to prepare to pour Pepsi?
I pour this drink to cans
60 cans
I pour this drink to bottles
23 bottles
I pour this drink to cups
8 cups
*/
