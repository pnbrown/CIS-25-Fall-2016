#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   cout << "    Multiplication Table" << endl;
    cout << "   1  2  3  4  5  6  7  8  9  " << endl;
    cout << "-----------------------------" << endl;
    const int numWidth = 2;

    for (int a = 1; a < 10; a++){
		cout << a << "| "; 
		for (int b = 1; b < 10; b++)
		{
		    cout << left << setw(numWidth) << a * b << " ";
		}
    	cout << "\n" << endl;
	}

}