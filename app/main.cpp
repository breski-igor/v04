#include "app.h"
#include <iostream>

// read animal id's (until 0) and display species name
// display total leg count
//Napišite program koji koriste?i te klase :

//unosi šifre životinja(cijeli broj) dok se ne unese 0 i ispisuje naziv vrste svake životinje
//na kraju ispiše ukupan broj nogu životinja



int main()
{
	using namespace vsite::oop::v4;
	int anm{ 0 };
	leg_counter counter;

	std::cout << "redni broj zivotinje : \n1. cockroach\n2. sparrow\n3. tarantula\n\n";



	while (true) {
		std::cout << "unestite broj zivotinje od 1 do 3 (0 za izlaz): ";
		std::cin >> anm;

		if (anm == 0) {
			std::cout <<"prekid!\n";
			break;
		}
		else if (anm > 0 && anm < 4) {
			auto animal = animal_factory(anm);
			if (animal) {
				counter.add_animal(animal.get()); 
				std::cout << "Dodana zivotinja: " << animal->species() << '\n';
			}
		}
		else {
			std::cout << "Nevazeci unos. Pokusaj ponovno.\n";
		}
	}
	std::cout << "suma nogu svih zivotinja je " << counter.legs() << std::endl;
	return 0;
}

