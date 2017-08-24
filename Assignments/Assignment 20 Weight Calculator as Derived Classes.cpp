#include <iostream> //cin, cout
#include <iomanip> //setw, setfill
#include <string> //string

//Base Class
class Planet
{
	public:
		float planetMultiplier;
		float setMultiplier(float x) 
		{
			planetMultiplier = x;
			return planetMultiplier;
		}
}; 


class Mercury: public Planet
{
	public:
		float getWeight(float earth)
		{
			float mercuryWeight;
			mercuryWeight = earth * planetMultiplier;
			std::cout << "Your weight on Mercury is " << mercuryWeight << " kilograms.\n";
			return mercuryWeight;
		}
};

class Venus: public Planet
{
	public:
		float getWeight(float earth)
		{
			float venusWeight;
			venusWeight = earth * planetMultiplier;
			std::cout << "Your weight on Venus is " << venusWeight << " kilograms.\n";
			return venusWeight;
		}
};

class Mars: public Planet
{
	public:
		float getWeight(float earth)
		{
			float marsWeight;
			marsWeight = earth * planetMultiplier;
			std::cout << "Your weight on Mars is " << marsWeight << " kilograms.\n";
			return marsWeight;
		}
};

class Moon: public Planet
{
	public:
		float getWeight(float earth)
		{
			float moonWeight;
			moonWeight = earth * planetMultiplier;
			std::cout << "Your weight on Moon is " << moonWeight << " kilograms.\n";
			return moonWeight;
		}
};

int main()
{
	float earth, mercury, venus, mars, moon;
	int selection;
	
	do
	{
		std::cout << "Please enter your weight in pounds: " << std::endl;

		std::cin >> earth;
		if (earth <= 0)
		{
			std::cout << "You have entered an invalid weight. Please try again.\n";
			std::cin.clear();
			std::cin.ignore();
		}
		else
		{
			earth = earth * 0.453592;
			std::cout << "Your weight on earth is " << earth << " kilograms\n";
		}
	}while(earth <=0);

	bool menuSelection = true;

	while((menuSelection = true))
	{
		std::cout << "For which planet would you like to see your weight?\n" 
		<< "Enter 1 for Mercury weight\n" 
		<< "Enter 2 for Venus weight\n" 
		<< "Enter 3 for Mars weight\n" 
		<< "Enter 4 for Moon weight\n" 
		<< "Enter 5 for all conversions.\n" 
		<< "Enter 6 to Quit\n";
	
		std::cin >> selection;
		if (selection == 1)
		{
			Mercury merc1;
			merc1.setMultiplier(.38);
			merc1.getWeight(earth);
		}
		else if (selection == 2)
		{
			Venus venus1;
			venus1.setMultiplier(.91);
			venus1.getWeight(earth);
		}
		else if (selection == 3)
		{
			Mars mars1;
			mars1.setMultiplier(.38);
			mars1.getWeight(earth);
		}
		else if (selection == 4)
		{
			Moon moon1;
			moon1.setMultiplier(.17);
			moon1.getWeight(earth);
		}
		else if (selection == 5)
		{
			Mercury merc1;
			merc1.setMultiplier(.38);
			merc1.getWeight(earth);
			
			Venus venus1;
			venus1.setMultiplier(.91);
			venus1.getWeight(earth);
			
			Mars mars1;
			mars1.setMultiplier(.38);
			mars1.getWeight(earth);
			
			Moon moon1;
			moon1.setMultiplier(.17);
			moon1.getWeight(earth);

		}
		else if (selection == 6){
			std::cout << "Thank you for playing." << std::endl;
			menuSelection = false;
			break;
		}
		else
		{
			std::cout << "You have entered an invalid response";
			std::cin.clear();
			std::cin.ignore();
		}
	} 
}