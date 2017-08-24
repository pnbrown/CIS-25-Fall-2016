#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main()
{
	std::ofstream studentManifest ("studentManifest.txt");
	if (studentManifest.is_open())
	{
		//studentManifest << std::setfill(' ');
		studentManifest << std::left << std::setw(200) << "Student ID# 	First Name	Last Name	DOB		Address" << std::endl;
		studentManifest << std::left << std::setw(200) << "123		Tim		Smith		19960215	777 Heavens Way" << std::endl;
		studentManifest << std::left << std::setw(200) << "150		Diablo		Ho		19900420	666 Hells Gate" << std::endl;
		studentManifest << std::left << std::setw(200) << "999		Tom		Doe		19860215	999 Nevermind" << std::endl;
		studentManifest << std::left << std::setw(200) << "100		Buffy		Slayer		19960314	456 Seven" << std::endl;
		studentManifest << std::left << std::setw(200) << "225		LeRoy		Jackson		20001114	123 Right Here Alley" << std::endl;
		studentManifest << std::left << std::setw(200) << "849		Bruce		Lee		19560215	333 Enter the Dragon" << std::endl;
		studentManifest << std::left << std::setw(200) << "123		Tom		Smith		19890130	321 Zero" << std::endl;
		studentManifest << std::left << std::setw(200) << "123		Dick		Smith		19880615	836 Pick Up Sticks" << std::endl;
		studentManifest << std::left << std::setw(200) << "150		Harry		Ho		19870420	577 Eleven" << std::endl;
		studentManifest << std::left << std::setw(200) << "643		Jane		Doe		19860210	888 Haight" << std::endl;


	}
}