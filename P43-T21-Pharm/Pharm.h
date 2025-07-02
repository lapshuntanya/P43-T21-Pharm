#pragma once
#include "Array_Template.h"
#include "Medicine.h"


class Pharm
{
	char* name;
	int sizeMed;
	Medicine* arrMed;
public:
	Pharm();
	Pharm(const char* _name);
	~Pharm();

	void showInfoPharm()const;
	void addMedicine(Medicine obj);
	void sortMedicinesByPrice();
	void sortMedicinesByType();
};

