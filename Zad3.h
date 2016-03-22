#pragma once

#include <memory>
#include <iostream>
#include <string>
#include <cstddef>
 
template<typename T>
class Alokator
{
public:
	Alokator(){ std::cout << "Tworzę alokator" << std::endl; }

	T *alokuj (std::size_t ile) { std::cout << "Alokuję przestrzeń na " << ile << " elementów" << std::endl; return al.allocate(ile); }

	void dealokuj(T *wsk, std::size_t ile) { std::cout << "Dealokuję przestrzeń " << ile << " elementów o adresie " << wsk  << std::endl; al.deallocate(wsk, ile); }
	void skonstruuj(T *wsk, const T &value) { std::cout << "Inicjuję element o adresie " << wsk << std::endl; al.construct(wsk, value); } 

	void zniszcz(T *wsk) { std::cout << "Niszczę element o adresie " << wsk << std::endl; al.destroy(wsk); }

	void wypisz(T val) {std::cout << val << std::endl;}
	
	

private:
	std::allocator<T> al;

};
