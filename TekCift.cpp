#include <iostream>

using namespace std;
int mod(int x);

int main()
{
    cout << mod(122) << endl;
    return 0;
}
int mod(int x)
{
    if( x & 1 == 1)
        cout << "tek" << endl;
    else
        cout << "cift" <<endl;
}
