#include "Medicine.h"

Medicine::Medicine(){
	title = new char[10] {"undefined"};
	type = new char[10] {"undefined"};
	price = 0;
}

Medicine::Medicine(const char* _title, const char* _type, float _price){
	int size_title = strlen(_title) + 1;
	title = new char[size_title];
	strcpy_s(title, size_title, _title);

	int size_type = strlen(_type) + 1;
	type = new char[size_type];
	strcpy_s(type, size_type, _type);

	price = _price;
}

Medicine::~Medicine(){
	delete[] title;
	delete[] type;
}

void Medicine::setTitle(const char* _title)
{
	if (strlen(_title) < 2) cout << "Error: setTitle!\n";
	else {
		delete[] title;

		int size_title = strlen(_title) + 1;
		title = new char[size_title];
		strcpy_s(title, size_title, _title);
	}
}

void Medicine::setType(const char* _type)
{
	if (strlen(_type) < 2) cout << "Error: setType!\n";
	else {
		delete[] type;

		int size_type = strlen(_type) + 1;
		type = new char[size_type];
		strcpy_s(type, size_type, _type);
	}
}

void Medicine::setPrice(float _price)
{
	if (_price > 0) {
		price = _price;
	}
	else {
		cout << "Error: setPrice!\n";
	}
}

const char* Medicine::getTitle() const
{
	return nullptr;
}

const char* Medicine::getType() const
{
	return nullptr;
}

float Medicine::getPrice() const
{
	return 0.0f;
}

void Medicine::showInfo() const
{
}
