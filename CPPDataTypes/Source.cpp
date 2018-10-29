// Data Types by Ray


#include <iostream>

using namespace std;
using std::cout;
using std::endl;



int main()
{
	
	int MyFirstInteger = 3;
	char ch;
	float f = 2.5;

	int myInt = 12;
	long myLong;
	myLong = myInt;

// Arrays
	int arrayName[10];
	int arrayName2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arrayName3[10] = { 1, 2, 3 };

// Strings
	char isAString[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char isNotAString[5] = { 'H', 'e', 'l', 'l', 'o' };
	cout << isAString << endl;
	cout << isNotAString << endl;
	char DifferentString[7] = "Hellow";
	char AnotherDifferentString[] = "Array size is inferred";

	string myString = "Hello!";
	std::string myNewString = "Less typing";


// Structure
	struct coffeeBean
	{
		string name;
		string country;
		int strength;
	};

	coffeeBean myBean = { "Strata", "Colombia", 10 };
	coffeeBean newBean;
	newBean.name = "Flora";
	newBean.country = "Mexico";
	newBean.strength = 9;


// Union. Just like Structure but for numbers
	union numericUnion
	{
		int intValue;
		long longValue;
		double doubleValue;
	};
	numericUnion myUnion;
	myUnion.intValue = 3;
	cout << myUnion.intValue << endl;
	myUnion.doubleValue = 4.5;
	cout << myUnion.doubleValue << endl;
	cout << myUnion.intValue; cout << endl;


// Enum
	enum Day { Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
	Day payDay;
	payDay = Thursday;
	cout << payDay << endl;


	cin.get();
}