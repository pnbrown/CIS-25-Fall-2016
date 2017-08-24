#include <iostream>
#include <string>
using namespace std;

int info(string a, int b, string c, int d){

	cout << a << " is " << b << " years old." << endl;
	cout << c << " is " << d << " years old." << endl;
	return 0;

}

int main()
{
	string firstName, secondName;
	int firstAge, secondAge;

	cout << "What is the first name?" << endl;
	cin >> firstName;

	cout << "What is the first age?" << endl;
	cin >> firstAge;

	cout << "What is the second name?" << endl;
	cin >> secondName;

	cout << "What is the second age?" << endl;
	cin >> secondAge;

	info(firstName, firstAge, secondName, secondAge);

}