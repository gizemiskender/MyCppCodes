#include <iostream>

using namespace std;

int main()
{
    int arr[4][4];
    int tek[8];
    int k=0;

    for(int i=0; i<4;i++)
    {
        for(int j=0; j<4; j++)
        {
            arr[i][j]=i*j;
            tek[k]=arr[i][j];
            k++;
            cout << i <<" "<< j <<" indisleri carpimi: "<< arr[i][j] <<endl;
        }
    }
    for(int k=0; k<8; k++)
    {
        cout << tek[k]<< " "; // tek diziye ata
    }

    return 0;
}
