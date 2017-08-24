#include <iostream>
using namespace std;

void mercurycalc(float weight){
	float mercury;
	mercury = weight * .38;
	cout << "Your weight on Mercury is " << mercury << " pounds." << endl;
}

void venuscalc(float weight){
	float venus;
	venus= weight * .91;
	cout << "Your weight on Venus is " << venus << " pounds." << endl;
}

void marscalc(float weight){
	float mars;
	mars= weight * .38;
	cout << "Your weight on Mars is " << mars << " pounds." << endl;
}

void mooncalc(float weight){
	float moon;
	moon= weight * .17;
	cout << "Your weight on the Moon is " << moon << " pounds." << endl;
}

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

	/*mercury= earth * .38;
	venus= earth * .91;
	mars= earth * .38;
	moon= earth * .17;*/



	//do
	bool menuSelection = true;

	while((menuSelection = true))
	{
		cout << "For which planet would you like to see your weight?\n" 
		<< "Enter 1 for Mercury weight\n" 
		<< "Enter 2 for Venus weight\n" 
		<< "Enter 3 for Mars weight\n" 
		<< "Enter 4 for Moon weight\n" 
		<< "Enter 5 for all conversions.\n" 
		<< "Enter 6 to Quit\n";
	
		cin >> selection;
		if (selection == 1)
		{
			mercurycalc(earth);
			//cout << "Your weight on Mercury is " << mercury << " pounds." << endl;
		}
		else if (selection == 2)
		{
			venuscalc(earth);
			//cout << "Your weight on Venus is " << venus << " pounds." << endl;
		}
		else if (selection == 3)
		{
			marscalc(earth);
			//cout << "Your weight on Mars is " << mars << " pounds." << endl;
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

			/*cout << "Your weight on Mercury is " << mercury << " pounds." << endl;
			cout << "Your weight on Venus is " << venus << " pounds." << endl;
			cout << "Your weight on Mars is " << mars << " pounds." << endl;
			cout << "Your weight on the Moon is " << moon << " pounds." << endl;*/
		}
		else if (selection == 6){
			cout << "Thank you for playing." << endl;
			menuSelection = false;
			break;
		}
		else
		{
			cout << "You have entered an invalid response";
			cin.clear();
			cin.ignore();
		}
	} 
	//while (selection != 1 && selection != 2 && selection != 3 && selection != 4 && selection != 5);
}