#pragma once
#include <iostream>
#include <string>
#define Max 1000
using namespace std;

struct Person
{
	string name;
	string telephone;
	string address;
	int age;
	int sex;		// 0->Ů, 1->��
};

struct Addressbooks
{
	Person personArray[Max];
	int m_Size;
};