#include <iostream>
using namespace std;

int main()
{
	cout << "The size of a character is " << sizeof(char) << " bit." << endl;
	cout << "The size of an integer is " << sizeof(int) << " bits." << endl;
	cout << "The size of a short integer is " << sizeof(short) << " bits." << endl;
	cout << "The size of a long integer is " << sizeof(long) << " bits." << endl;
	cout << "The size of a float is " << sizeof(float) << " bits." << endl;
	cout << "The size of a double is " << sizeof(double) << " bits." << endl;
	cout << "The size of a wide character is " << sizeof(wchar_t) << " bits." << endl;
}