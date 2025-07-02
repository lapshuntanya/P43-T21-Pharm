#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Medicine
{
	char* title; //Назва препарату
	char* type; //тип препарату
	float price; //ціна

public:
	Medicine();
	Medicine(const char* _title, const char* _type, float _price);
	~Medicine();

	void setTitle(const char* _title);
	void setType(const char* _type);
	void setPrice(float _price);

	const char* getTitle()const;
	const char* getType()const;
	float getPrice()const;

	void showInfo()const;
};

