 
#include "Medicine.h"

int main()
{
	Medicine a("Nurofen", "pills", 70.43);
	Medicine b("Dr Mom", "syrope", 120.78);

	a.showInfo();
	b.showInfo();
	cout << "====================================\n";

	//int n2 = 9;
	//int k = n2; // k = 9

	Medicine k = a; //"Nurofen", "pills", 70.43
	//Конструктор копіювання

	k.setType("capsules");

	a.showInfo();
	k.showInfo();

}

 