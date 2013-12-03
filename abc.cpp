#include <iostream>

using namespace std;

int main()
{
    char x[3][8];
    int k=65;

    for(int i = 0; i<7; i++)
    {
        for(int j=0; j<11; j++)
        {
            x[i][j]=k;
            k++;
        }
    }
    for(int i = 0; i<3; i++)
    {
    for(int j=0; j<8; j++){
    cout << i <<" "<<j<< " inci elemani " << x[i][j] <<endl;

    }
    cout <<endl;
    }

     for(char i=65;i<123;i++)
     cout << i << endl;

    return 0;
}

