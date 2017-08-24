#include <iostream>
using namespace std;

int main()
{
	float earth, mercury, venus, mars, moon;

	earth= 215;
	mercury= earth * .38;
	venus= earth * .91;
	mars= earth * .38;
	moon= earth * .17;

	cout << "Your weight on Earth is " << earth << " pounds." << endl;
	cout << "Your weight on Mercury is " << mercury << " pounds." << endl;
	cout << "Your weight on Venus is " << venus << " pounds." << endl;
	cout << "Your weight on Mars is " << mars << " pounds." << endl;
	cout << "Your weight on the Moon is " << moon << " pounds." << endl;
}