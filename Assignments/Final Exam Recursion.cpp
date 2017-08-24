#include <iostream>

void drawStars (int x)
{
	int c = x;
	while (c > 0)
	{	std::cout << "*";
		c--;
		if (c == 0)
		{
			std::cout << std::endl;
			x--;
			drawStars(x);
		}
	}	
}


int main()
{ 
	drawStars(5);
}

/*void numberFunction(int i) {
  cout << "The number is: " << i << endl;
  i++;
  if(i<10) {
    numberFunction(i);
  }
}*/