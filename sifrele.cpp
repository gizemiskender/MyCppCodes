#include <iostream>

using namespace std;

int main()
{
    char arr[2][5] = {{'g', 'i', 'z', 'e', 'm'},{'h', 'a', 'l', 'i','z'}};
    char sec[2][5];

    for(int i=0; i<2; i++)
    {
        for(int k=0; k<5; k++)
        {
            sec[i][k]=arr[i][k]+2; //karakterin ikki sonraki degeri,

            if(sec[i][k]>116)
                sec[i][k]=90+(sec[i][k]-116);

            cout << sec[i][k]<<" ";
        }
        cout<< endl;
    }

    return 0;
}
