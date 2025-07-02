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


};

