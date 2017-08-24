#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int choice;
	
	do {
		cout << setfill('*') << setw(40) << "*" << endl;
		cout << setfill(' ') << setw(39) << left << "* Main Menu:" << right << "*\n";
		cout << setfill(' ') << setw(39) << left << "* Enter # to run program or Quit" << right << "*\n";
		cout << setfill(' ') << setw(39) << left << "* 1) Moon Calculator" << right << "*\n";
		cout << setfill(' ') << setw(39) << left << "* 2) Income Tax Program" << right << "*\n";
		cout << setfill(' ') << setw(39) << left << "* 3) Change Calculator" << right << "*\n";
		cout << setfill(' ') << setw(39) << left << "* 4) Quit" << right << "*\n";
		cout << setfill('*') << setw(40) << "*" << endl;

		cin >> choice;

		switch(choice)
		{
			case 1: {
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
				} while(earth <=0);

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
			case 2:{
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
			case 3: {
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
			}
			case 4: cout << "Thank you for playing." << endl;
				break;
		} while(case =! 4);
	}
}	