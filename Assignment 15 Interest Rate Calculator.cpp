#include <iostream>
#include <iomanip>
#include <cmath>

void yearlyInterestCalculator(float *savings, float *years, float *interestRate);
void compoundInterestCalculator(float *savings, float *years, float *interestRate, float *periods);


class Savings {
	public:
		float savings, years, interestRate, periods;

		void setSavings(float setSavings)
		{
			savings = setSavings;
		};
		void setYears(float setYears)
		{
			years = setYears;
		};
		void setInterestRate(float setInterestRate)
		{
			interestRate = setInterestRate;
		};
		void setPeriod(float setPeriod)
		{
			periods = setPeriod;
		};	 
};


int main()
{
		int choice;

		std::cout << std::setfill('*') << std::setw(40) << "*" << std::endl;
		std::cout << std::setfill(' ') << std::setw(39) << std::left << "* Main Menu:" << std::right << "*\n";
		std::cout << std::setfill(' ') << std::setw(39) << std::left << "* Enter # to run program or Quit" << std::right << "*\n";
		std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 1) Yearly Interest Calculator" << std::right << "*\n";
		std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 2) Compound Interest Calculator" << std::right << "*\n";
		std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 3) Quit" << std::right << "*\n";
		std::cout << std::setfill('*') << std::setw(40) << "*" << std::endl;

		std::cin >> choice;
		
		bool menuRepeat = true;
		while (menuRepeat != false)
		{
			switch(choice)
			{
				case 1:
				{

					float a, b, c;
					//float * savings, * years, * interestRate;

					std::cout << "You've chosen to run the Yearly Interest Calculator" << std::endl
					<< "Please enter the Principle: ";
					std::cin >> a;
					std::cout << "Please enter the number of years: ";
					std::cin >> b;
					std::cout << "Please enter the Interest Rate: ";
					std::cin >> c;

					//*savings = a;
					//*years = b;
					//*interestRate = c;

					yearlyInterestCalculator(&a, &b, &c);
					menuRepeat = false;
				}
				case 2:
				{
					
					std::cin.clear();
					std::cin.ignore();
					 
					float a, b, c, d;
				
					std::cout << "You've chosen to run the Compound Interest Calculator" << std::endl
					<< "Please enter the Principle: ";
					std::cin >> a;
					std::cout << "Please enter the number of years: ";
					std::cin >> b;
					std::cout << "Please enter the Interest Rate: ";
					std::cin >> c;
					std::cout << "Please enter the number of times it compounds: ";
					std::cin >> d;


					compoundInterestCalculator(&a, &b, &c, &d);
					menuRepeat = false;
				}
				case 3:
				{
					std::cout << "Thank you for playing. Goodbye." << std::endl;
					menuRepeat = false;
					break;

				}
				default:
				{
					std::cin.clear();
					std::cin.ignore(); 
					std::cout << "You have entered an invalid response. Please try again.";
				}

			}
		}


}

void yearlyInterestCalculator(float *savings, float *years, float *interestRate)
{
	int fundsAfterInterest;
	for (int x = 0; x <= *years; x++ )
	{
		fundsAfterInterest = (*savings * ( 1 + ( x * (*interestRate/100) )) );
		std::cout << "After year " << x << ", the total amount of money is $" << fundsAfterInterest << ".\n";
	}
	//break;
}

void compoundInterestCalculator(float *savings, float *years, float *interestRate, float *periods)
{
	int fundsAfterInterest;
	float base, exponent;
	for (int x = 0; x <= *years; x++ )
	{
		base = ( 1 + ( x * ((*interestRate/100)/ *periods)));
		exponent = ((*periods) * (*years));

		fundsAfterInterest = (*savings) * pow(base, exponent);
		std::cout << "After year " << x << ", the total amount of money is $" << fundsAfterInterest << ".\n";
	}
	//break;
}