#include <iostream>

using namespace std;
int sum(int x, int y);

int main()
{
    cout << sum(1,50) << endl;
    return 0;
}
int sum(int x, int y)
{
    if(x > y)
    {
        return 0;
    }
    else
    {
        return x + sum(x+1,y);
    }
}
