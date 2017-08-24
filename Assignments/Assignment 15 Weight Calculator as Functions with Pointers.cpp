#include <iostream>

void mercurycalc(float *weight)
{
	float mercury;
	mercury = *weight * .38;
	std::cout << "Your weight on Mercury is " << mercury << " pounds." << std::endl;
}

void venuscalc(float *weight){
	float venus;
	venus= *weight * .91;
	std::cout << "Your weight on Venus is " << venus << " pounds." << std::endl;
}

void marscalc(float *weight)
{
	float mars;
	mars= *weight * .38;
	std::cout << "Your weight on Mars is " << mars << " pounds." << std::endl;
}

void mooncalc(float *weight)
{
	float moon;
	moon = *weight * .17;
	std::cout << "Your weight on the Moon is " << moon << " pounds." << std::endl;
}

int main()
{
	float weight, mercury, venus, mars, moon, *earth;
	int selection;
	
	bool redoWeight = true;
	while (redoWeight != false)
	{
		std::cout << "Please enter your weight in pounds: " << std::endl;

		std::cin >> weight;
		if (weight <= 0)
		{
			std::cout << "You have entered an invalid weight. Please try again.\n";
			std::cin.clear();
			std::cin.ignore();
		}
		else
		{
			std::cout << "Thank you for entering your weight." << std::endl;
			earth = &weight;
			redoWeight = false;
			//cout << redoWeight;
			//break;		
		}

	}

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
			mercurycalc(earth);
		}
		else if (selection == 2)
		{
			venuscalc(earth);
		}
		else if (selection == 3)
		{
			marscalc(earth);
		}
		else if (selection == 4)
		{

			mooncalc(earth);
		}
		else if (selection == 5)
		{
			mercurycalc(earth);
			venuscalc(earth);
			marscalc(earth);
			mooncalc(earth);
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