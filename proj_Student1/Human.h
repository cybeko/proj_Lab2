#pragma once
#include <iostream>
using namespace std;

class Human
{
protected:
	string name;
	int age;
public:
	Human() : name("[Unspecified]"), age(NULL) {}
	void Input();
};