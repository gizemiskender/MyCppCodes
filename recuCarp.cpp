#include <iostream>

using namespace std;
int ust(int x, int y);

int main()
{
    cout << ust(2,5) << endl;
    return 0;
}
int ust(int x, int y){

    if(y == 0)
    {
      return 1;
    }
    else
    {
       return x * ust(x, y-1);
    }
}

