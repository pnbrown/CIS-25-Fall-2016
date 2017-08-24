#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int choice;
	
	do {
		cout << setfill('*') << setw(40) << "*" << endl;
		cout << setfill(' ') << setw(39) << left << "* Main Menu:" << right << "*\n";
		cout << setfill(' ') << setw(39) << left << "* Enter # to run program or Quit" << right << "*\n";
		cout << setfill(' ') << setw(39) << left << "* 1) Is Input divisible by 5 and 6" << right << "*\n";
		cout << setfill(' ') << setw(39) << left << "* 2) Is Input divisible by 5 or 6" << right << "*\n";
		cout << setfill(' ') << setw(39) << left << "* 3) Quit" << right << "*\n";
		cout << setfill('*') << setw(40) << "*" << endl;


		cin >> choice;

		switch(choice)
		{case 1: {
				int int1;

				cout << "Enter an integer." << endl;
				cin >> int1;

				bool first = (int1%5) && (int1%6);

				if (first == true)
				{
					cout << int1 << " is divisible by 5 and 6." << endl;
				}
				else{
					cout << int1 << " is not divisible by 5 and 6." << endl;
				}
				cin.clear();
				cin.ignore();

			}
			case 2:{
				int int2;

				cout << "Enter an integer.";
				cin >> int2;

				bool first = (int2%5) || (int2%6);

				if (first == true)
				{
					cout << int2 << " is divisible by 5 or 6." << endl;
				}
				else{
					cout << int2 << " is not divisible by 5 or 6." << endl;
				}
			}
			case 3: {
				break;
			}
		}
	}while ((choice =! 3) );
}
