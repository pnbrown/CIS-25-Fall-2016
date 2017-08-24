#include <iostream>
#include <cmath>

int main()
{
	int array[20];
	for (int x = 0; x < 20; x++)
	{
		array[x] = rand() % 50;
	}

	for (int x = 0; x < 20; x++)
	{
		std::cout << array[x] << " ";
		std::cout << &array[x] << std::endl;
	}
}