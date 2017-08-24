#include <iostream>

int main()
{
	int randArray[1000];

	for (int x=0; x < 1000; x++)
	{
		randArray[x] = rand() % 1000;	
	}

	int checkNum, frequency;
	int location[1000] = {0};
	std::cout << "Which number would you like to check? ";
	std::cin >> checkNum;

	frequency = 0;

	for (int y = 0; y < 1000; y++)
	{
		if (randArray[y] == checkNum)
		{
			frequency = frequency + 1;
			std::cout << "Found one " << std::endl;
			location[y] = y;
		}
	}

	if (frequency > 0)
		{
			std::cout << "Your number appears in the array " << frequency << " times." << std::endl;
			
			for (int z = 0; z < 1000; z++)
			{
				
				if (location[z] > 0)
				{
				std::cout << "Your number appears at " << location[z] << std::endl;
				}
			}
		}
	else
	{
		std::cout << "Your number does not appear in the array." << std::endl;
	}
}