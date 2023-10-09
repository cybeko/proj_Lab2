#pragma once
using namespace std;
#include <iostream>

class University
{
protected:
	string name;
	string adress;
	string faculty;
public:
	University() : name("[Unspecified]"), adress("[Unspecified]"), faculty("[Unspecified]") {}
	void Input();
};