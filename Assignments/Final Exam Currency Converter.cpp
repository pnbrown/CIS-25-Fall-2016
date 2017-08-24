#include <iostream>	//cin, cout
#include <iomanip>	//setw, setfill

//Base Class Currency
class Currency
{
	public:
		float conversionRate;

		void setConversionRate(float x)
		{
			conversionRate = x;
		}
};

//Derived Classes of Dollar, Yen, Euro, and Peso
class Dollar : public Currency
{
	public:
		void getConversion(float dollarAmount)
		{
			float conversion = dollarAmount * conversionRate;
			std::cout << "You have " << conversion << " dollars.\n";
		}
};

class Yen : public Currency
{
		public:
		void getConversion(float dollarAmount)
		{
			float conversion = dollarAmount * conversionRate;
			std::cout << "You have " << std::fixed << std::setprecision(2) << conversion << " Yen.\n";
		}

};

class Euro : public Currency
{
	public:
		void getConversion(float dollarAmount)
		{
			float conversion = dollarAmount * conversionRate;
			std::cout << "You have " << std::fixed << std::setprecision(2) << conversion << " Euro.\n";
		}
};

class Peso : public Currency
{
	public:
		void getConversion(float dollarAmount)
		{
			float conversion = dollarAmount * conversionRate;
			std::cout << "You have " << std::fixed << std::setprecision(2) << conversion << " Peso.\n";
		}
};

int main()
{
	float dollarAmount;
	bool validDollar = false;

	while (validDollar != true)
	{
		std::cout << "How many dollars do you want to convert? ";
		std::cin >> dollarAmount;

		if (dollarAmount <= 0)
		{
			std::cout << "You have entered an invalid entry. Please try again.\n";
		}
		else 
		{
			validDollar = true;
		}
	}



		
		bool menuRepeat = true;
		while (menuRepeat != false)
		{
			int choice;
			//Menu
			std::cout << std::setfill('*') << std::setw(40) << "*" << std::endl;
			std::cout << std::setfill(' ') << std::setw(39) << std::left << "* Main Menu:" << std::right << "*\n";
			std::cout << std::setfill(' ') << std::setw(39) << std::left << "* Enter # to run program or Quit" << std::right << "*\n";
			std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 1) Convert Dollar to Yen" << std::right << "*\n";
			std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 2) Convert Dollar to Euro" << std::right << "*\n";
			std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 3) Convert Dollar to Peso" << std::right << "*\n";
			std::cout << std::setfill(' ') << std::setw(39) << std::left << "* 4) Quit" << std::right << "*\n";
			std::cout << std::setfill('*') << std::setw(40) << "*" << std::endl;

			std::cin >> choice;

			switch(choice)
			{
				case 1:
				{
					std::cin.clear();
					std::cin.ignore();
					std::cout << "You've chosen to Convert Dollars to Yen." << std::endl;
					Yen yen1;
					yen1.setConversionRate(115.06);
					yen1.getConversion(dollarAmount);
					break;
				}
				case 2:
				{
					std::cin.clear();
					std::cin.ignore();
					std::cout << "You've chosen to Convert Dollars to Euro." << std::endl;
					Euro euro1;
					euro1.setConversionRate(0.94);
					euro1.getConversion(dollarAmount);
					break;
				}
				case 3:
				{					
					std::cin.clear();
					std::cin.ignore();
					std::cout << "You've chosen to Convert Dollars to Peso." << std::endl;
					Peso peso1;
					peso1.setConversionRate(20.24);
					peso1.getConversion(dollarAmount);				
					break;

				}
				case 4:
				{
					std::cout << "Thank you for playing.";
					menuRepeat = false;
					break;
				}

			}
		}
}