#include <iostream>
#include <string>
using namespace std;

int mice(int);
int run(int);

int main()
{
    int a=2, b=2;
    mice(a);
    run(b);
}

int mice(int c)
{
    int x=0;
    while(c > x)
    {
        cout << "Three blind mice" << endl;
        x++;
    }
    return 0;
}

int run(int d)
{
    int y = 0;
    while(d > y)
    {
        cout << "See how they run" << endl;
        y++;
    }
    return 0;
}