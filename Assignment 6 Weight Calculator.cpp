#include <iostream>
using namespace std;

int main()
{
	float earth, mercury, venus, mars, moon;
	int selection;
	
	do
	{
		cout << "Please enter your weight in pounds: " << endl;

		cin >> earth;
		if (earth <= 0)
		{
			cout << "You have entered an invalid weight. Please try again.\n";
			cin.clear();
			cin.ignore();
		}
	}while(earth <=0);

	mercury= earth * .38;
	venus= earth * .91;
	mars= earth * .38;
	moon= earth * .17;

	do
	{
		cout << "For which planet would you like to see your weight?\n Enter 1 for Mercury weight\n Enter 2 for Venus weight\n Enter 3 for Mars weight\n Enter 4 for Earth weight\n Enter 5 for all conversions.\n";
	
		cin >> selection;
		if (selection == 1)
		{
			cout << "Your weight on Mercury is " << mercury << " pounds." << endl;
		}
		else if (selection == 2)
		{
			cout << "Your weight on Venus is " << venus << " pounds." << endl;
		}
		else if (selection == 3)
		{
			cout << "Your weight on Mars is " << mars << " pounds." << endl;
		}
		else if (selection == 4)
		{
			cout << "Your weight on Earth is " << earth << " pounds." << endl;
		}
		else if (selection == 5)
		{
			cout << "Your weight on Mercury is " << mercury << " pounds." << endl;
			cout << "Your weight on Venus is " << venus << " pounds." << endl;
			cout << "Your weight on Mars is " << mars << " pounds." << endl;
			cout << "Your weight on Earth is " << earth << " pounds." << endl;
		}
		else
		{
			cout << "You have entered an invalid response";
			cin.clear();
			cin.ignore();
		}
	} while (selection != 1 && selection != 2 && selection != 3 && selection != 4 && selection != 5);
}