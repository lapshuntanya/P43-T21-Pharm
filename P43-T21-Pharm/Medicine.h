#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Medicine
{
	char* title; //����� ���������
	char* type; //��� ���������
	float price; //����

public:
	Medicine();
	Medicine(const char* _title, const char* _type, float _price);
	~Medicine();


};

