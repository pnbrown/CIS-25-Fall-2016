#include <iostream>
#include <math.h>
using namespace std;

int main()
{
//variable declaration
	float owed, paid, balance;
	int dollar, quarter, dime, nickel, penny;
//request values
	cout << "How much money is owed? " << endl;
	cin >> owed;
	cout << "How much money was paid? " << endl;
	cin >> paid;
//calculation of balance due to customer
	balance = paid - owed;

	cout << "The remaining balance is " << balance << endl;
//begin finding how change will be returned by determining number of dollars
	while (balance > 1.0)
    	{
			dollar = trunc(balance);
			balance = balance - dollar;
			if (balance < 1.0)
				break;
		}
//determine number of quarters
		quarter = 0;
	while (balance > .25)
		{
			quarter ++;
			balance = balance - .25;
			if (balance < .25)
				break;
		}
//determine number of dimes
		dime = 0;
	while (balance > .1)
		{
			dime ++;
			balance = balance - .1;
			if (balance < .1)
				break;
		}
//determine number of nickels
		nickel = 0;
	while (balance > .05)
		{
			nickel ++;
			balance = balance - .05;
			if (balance < .05)
				break;
		}
//determine number of pennies
		penny = 0;
	while (balance > .00000001)
		{
			penny ++;
			balance = balance - .01;
			if (balance == 0)
				break;
		}
//return values
	cout << "Give the customer " << dollar << " dollars." << endl;
	cout << "Give the customer " << quarter << " quarters." <<endl;
	cout << "Give the customer " << dime << " dimes." << endl;
	cout << "Give the customer " << nickel << " nickels." << endl;
	cout << "Give the customer " << penny << " pennies." << endl;
}