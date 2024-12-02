#include "Animals.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Cat obj("Physics", "30%", 5);

	obj.set_name("Oleg");
	obj.set_cource(3);
	obj.set_age(20);

	obj.print();

	return 0;
}