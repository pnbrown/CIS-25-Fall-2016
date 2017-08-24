#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	float income, multiplier;

	cout << "Please enter your annual income rounded to the nearest dollar (without commas)." << endl;
	cin >> income;
	cout << "You have entered an income of $" << income << "." << endl;

	if ( income >= 307051 )
	{ 
		multiplier = .386;
	}
	if ( income >= 141251 and income <= 307050 )
	{ 
		multiplier = .35;
	}
	if ( income >= 67701 and income <= 141250 )
	{ 
		multiplier = .30;
	}
	if ( income >= 27951 and income <= 67700 )
	{ 
		multiplier = .27;
	}
	if ( income >= 6001 and income <= 27950 )
	{ 
		multiplier = .15;
	}
	if ( income <= 6000 )
	{ 
		multiplier = .10;
	}

	cout << "Your tax multiplier is " << multiplier << endl;
	cout << "Your tax amount is $" << setprecision (2) << fixed << income * multiplier << endl;
}

