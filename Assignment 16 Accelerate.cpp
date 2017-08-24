#include <iostream>

double accelerate(double*, double);

int main()
{
	double initial, accelerateAmount; 

	std::cout << "Please do not use while driving.\n";
	std::cout << "How fast are you going? \n";
	std::cin >> initial;
	std::cout << "How much would you like to accelerate?\n";
	std::cin >> accelerateAmount;

	std::cout << "Your original speed is " << initial << " miles per hour. "
	<< "Your final speed is " << accelerate(&initial, accelerateAmount) << " miles per hour.";


}

double accelerate(double *initial, double accelerateAmount)
{
	double finalSpeed;
	return finalSpeed = *initial + accelerateAmount;
}