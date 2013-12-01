#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int* x = new int;      // x pointeri dinamik oluştu
    int* arr = new int[10]; // arr dizisi
    int* arr_copy = new int[10];

    fill(arr, arr+10,0);

    for(int k=0; k<10; k++)
        arr[k]=rand()%20;

    arr_copy = arr; //shallow copy arr silinirse arr_copy de silinir

    for(int g=0; g<10; g++)
        arr_copy[g] = arr[g]; // deep copy yeni bir pointer dizi olusturup kopyalar

    *x = 123;
    cout << *x <<endl;

    for(int i=0; i<10;i++){
        cout <<arr[i]<< " ";
        cout << arr_copy[i] <<endl; }

    delete x; // x i sildim
    delete [] arr; // diziyi sildim

    return 0;
}
