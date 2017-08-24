#include <iostream>
#include <string>

int main()
{
	int cipherLength;

	const char alphabet[] = "abcdefghijklmnopqrstuvxyzabcdefghijklmnopqrstuvwxyz";

	const int key = 5;

	std::string plain;

	std::cout << "What is your text?" << std::endl;;

	getline(std::cin, plain);

	//std::cout << plain << std::endl;

	cipherLength = plain.length();

	char code[cipherLength];

	for (int iterator = 0; iterator < cipherLength; iterator++)
	{
		code[iterator] = alphabet[plain[iterator] - 'a' + key];

		std::cout << code[iterator];

	}

	std::cout << code << std::endl;
}