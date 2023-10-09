#include "Student.h"
#include "Human.h"
#include "University.h"

Student::Student()
{
	Human::Human();
	University::University();
	group = "[Unspecified]";
	arrSize = NULL;
	arrGrades = nullptr;
}
Student::~Student()
{
	delete[] arrGrades;
}

void Student::Print()
{
	cout << "\tHuman info:" << endl;
	cout << "Name: " << Human::name << endl;
	cout << "Age: " << Human::age << endl;

	cout << "\tUniversity info:" << endl;
	cout << "Name: " << University::name << endl;
	cout << "Adress: " << University::adress << endl;
	cout << "Faculty: " << University::faculty << endl;

	cout << "\tStudent info:" << endl;
	cout << "Group name: " << group << endl;
	if (arrSize <= 0)
	{
		cout << "No grades." << endl;
	}
	else
	{
		cout << "\nGrades:" << endl;
		cout << "| ";
		for (int i = 0; i < arrSize; i++)
		{
			cout << arrGrades[i] << " | ";
		}
	}
}
void Student::Input()
{
	cout << "\tEnter human info:" << endl;
	Human::Input();
	cout << "\tEnter university info:" << endl;
	University::Input();

	cout << "\tEnter student info:" << endl;

	cout << "Enter group name: ";
	cin >> group;

	cout << "Enter the number of grades: ";
	cin >> arrSize;
	arrGrades = new int[arrSize];
	for (int i = 0; i < arrSize; i++)
	{
		cout << "Enter grade #" << i + 1 << ": ";
		cin >> arrGrades[i];
	}
}