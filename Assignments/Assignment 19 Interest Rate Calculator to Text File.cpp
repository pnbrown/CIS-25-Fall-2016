#include <iostream>	//cout, cin
#include <iomanip>	//setw, setfill
#include <fstream> 	//ofstream
#include <cmath>	//pow

class SimpleSavings 
{
	public:
		float savings, years, interestRate;

		void setSavings(float setSavings)
		{
			savings = setSavings;
		}
		void setYears(float setYears)
		{
			years = setYears;
		}
		void setInterestRate(float setInterestRate)
		{
			interestRate = setInterestRate;
		}

		float getYearlyInterest()
		{
			float fundsAfterInterest;
			std::ofstream simpleSavings("simpleSavings.txt");
			for (int x = 0; x <= years; x++ )
			{
				fundsAfterInterest = (savings * ( 1 + ( x * (interestRate/100) )) );
				simpleSavings << "After year " << x << ", the total amount of money is $" << std::fixed << std::setprecision(2) << fundsAfterInterest << ".\n";
			}
			return fundsAfterInterest;
		}
};

class CompoundSavings
{
	public:
		float savings, years, interestRate, periods;

		void setSavings(float setSavings)
		{
			savings = setSavings;
		}
		void setYears(float setYears)
		{
			years = setYears;
		}
		void setInterestRate(float setInterestRate)
		{
			interestRate = setInterestRate;
		}
		void setPeriod(float setPeriod)
		{
			periods = setPeriod;
		}
		float getCompoundInterest()
		{
			float fundsAfterInterest;
			float base, exponent;
			std::ofstream compoundSavings("compoundSavings.txt");
			for (int x = 0; x <= years; x++ )
			{
				base = ( 1 + ( x * ((interestRate/100)/ periods)));
				exponent = ((periods) * (years));

				fundsAfterInterest = (savings) * pow(base, exponent);
				compoundSavings << "After year " << x << ", the total amount of money is $" << std::fixed << std::setprecision(2) <<fundsAfterInterest << ".\n";
			}
			return fundsAfterInterest;
		}
};


int main()
{
		int choice;
		//Menu
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

					float a;

					SimpleSavings simple;

					std::cout << "You've chosen to run the Yearly Interest Calculator" << std::endl
					<< "Please enter the Principle: ";
					std::cin >> a;
					if (a < 0)
					{
						std::cout << "You have entered an invalid principle. Please try again.\n";
						break;
					}
					else
					{
						float b, c;
						simple.setSavings(a);
						std::cout << "Please enter the number of years: ";
						std::cin >> b;
						simple.setYears(b);
						std::cout << "Please enter the Interest Rate: ";
						std::cin >> c;
						simple.setInterestRate(c);

						simple.getYearlyInterest();
					}

					menuRepeat = false;
					break;
				}
				case 2:
				{
					
					float a;

					CompoundSavings compound;

					std::cout << "You've chosen to run the Compound Interest Calculator" << std::endl
					<< "Please enter the Principle: ";
					std::cin >> a;
					if (a < 0)
					{
						std::cout << "You have entered an invalid principle. Please try again.\n";
						break;
					}
					else
					{
						float b, c, d;
						compound.setSavings(a);
						std::cout << "Please enter the number of years: ";
						std::cin >> b;
						compound.setYears(b);
						std::cout << "Please enter the Interest Rate: ";
						std::cin >> c;
						compound.setInterestRate(c);
						std::cout << "Please enter the number of times it compounds: ";
						std::cin >> d;
						compound.setPeriod(d);


						compound.getCompoundInterest();
					}

					menuRepeat = false;
					break;
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