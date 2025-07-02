#include "Pharm.h"

Pharm::Pharm()
{
	name = new char[10] {"undefined"};
	sizeMed = 0;
	arrMed = nullptr;
}

Pharm::Pharm(const char* _name)
{
	int sizeName = strlen(_name) + 1;
	name = new char[sizeName];
	strcpy_s(name, sizeName, _name);

	sizeMed = 0;
	arrMed = nullptr;
}

Pharm::~Pharm()
{
	delete[] name;
	if (sizeMed > 0) delete[] arrMed;
}

void Pharm::showInfoPharm() const
{
	cout << "\t Pharm: " << name << endl;
	cout << "\t Amount of medicines: " << sizeMed << endl;
	for (int i = 0; i < sizeMed; i++)
	{
		arrMed[i].showInfo();
	}
}

void Pharm::addMedicine(Medicine obj)//Конструктор копіювання
{
	addItemBack(arrMed, sizeMed, obj);//Конструктор копіювання
}

void Pharm::sortMedicinesByPrice()
{
	sort_if<Medicine>(arrMed, sizeMed, [](Medicine left, Medicine right) { //2 - Конструктор копіювання
		return left.getPrice() < right.getPrice();
		});
}