#include <iostream>
#include <string>
using namespace std;

int main(){

	double sample[10];

	for (int x=0; x<10; x++)
	{
		cout << "Please enter a number. \n";
		cin >> sample[x];

	}

	int sum=0;

	for (int y=0; y<10; y++)
	{
		sum = sum + sample[y];
	}

	cout << "You have entered the following numbers: \n";

	for (int z=0; z<10; z++)
	{
		if (z !=9)
		{
			cout << sample[z] << ", ";
		}
		else
		{
			cout << sample[z] << ".\n";
		}
	}

	float average;

	average = (sum/10);

	cout << "The average of the entered values is " << average << ".\n";
}