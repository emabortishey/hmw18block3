#include "Animals.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	// тесты для каждог класса

	Cat obj("Turtle + white", "Manekun", 10, "Pets", "Cities and forests", 20);
	Dog obj1("Grey + white", "Grauhound", 42, "Pets", "Cities and farms", 18);
	Parrot obj2("White + yellow", "Kakadoo", 7, "Wild bird", "Tropical forests", 30);

	obj.print();
	cout << '\n';
	obj1.print();
	cout << '\n';
	obj2.print();
	cout << '\n';

	return 0;
}