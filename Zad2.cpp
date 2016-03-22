//Dopisz kod tak, aby program kompilował się wyświetlił poprawny output. Poniższego pliku nie wolno edytować.
//W pliku Zad2.cpp można pisać jedynie w funkcji main.
//Można korzystać jedynie z funkcji, które zostały zaimplementowane poniżej, z funkcji lambda, oraz z std::bind. Operatory + i * wolno używać jedynie w funkcji lambda. Nie wolno używać dodawać żadnych dodatkowych bibliotek. 

#include <memory>
#include <functional>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std::placeholders;

class AddandMulti
{
public:
	int operator()(int a, int b, int c) { return (a + b) * c; }
};

void show(std::string a, std::string b, std::string c, std::string d, std::string e)
{
	std::cout << a << b << c << d << e << std::endl;
}

std::string add(std::string a, std::string b)
{
	return a+b;
}

int main()
{
	AddandMulti a;
	std::cout << "(1+2)*3 = " << a(1,2,3) << std::endl;
	 	
	//auto just_add = std::bind(a, _1, _2, 1);
	std::cout << "1+2 = " << just_add(1,2) << std::endl;

	std::cout << "2*3 = " << std::endl;//<< []( int a, int b )->int { return a * b; }( 2, 3 ) << std::endl;
	
	std::cout << "Creating vector v" << std::endl;
	std::vector<std::string> v = {"co", "ma", "ta", "na", "to"};

	//auto new_string = std::bind (&show, _3, std::bind(&add, _5, ", "), std::bind(&add, _1, " "), std::bind(&add, std::bind(&add, _2, _2), " "), std::bind( &add, std::bind(&add, _4, " "), std::bind(&add, _5, "?") ) );
	new_string(v[0], v[1], v[2], v[3], v[4]);
}

/*Output:

(1+2)*3 = 9
1+2 = 3
2*3 = 6
Creating vector v
tato, co mama na to?

*/
