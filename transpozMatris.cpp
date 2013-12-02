#include <iostream>

using namespace std;

int main()
{
    int matris[2][4] = {{2,3,4,5}, {2,5,7,8} };
    int transpoz[4][2];

    for(int m=0; m<2; m++)
    {
        cout <<"\t";
        for(int k=0; k<4; k++)
        {
            cout << matris[m][k]<<" ";
            transpoz[k][m]=matris[m][k];
        }
        cout << endl;
    }
        cout <<endl;

    for(int i=0; i<4; i++)
    {
        cout <<"\t";
        for(int t=0; t<2; t++)
        {
            cout << transpoz[i][t] <<" ";
        }
        cout <<endl;
    }

    return 0;
}
