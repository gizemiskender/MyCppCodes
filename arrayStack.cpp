#include <iostream>

using namespace std;

class ArrayStack
{
    enum {DEF_CAPACITY = 100};

    public:
        ArrayStack(int cap = DEF_CAPACITY);
        int size();
        bool empyt();
        int& top();
        void push(const int& e);
        void pop();

    private:
        int* S;
        int capacity;
        int t;
};
ArrayStack::ArrayStack(int cap)
{
    S = new int[cap];
    cap = capacity;
    t = -1;
}
int ArrayStack::size()
{
    return t+1;
}
bool ArrayStack::empyt()
{
    return t<0;
}

int& ArrayStack::top()
{
    if(empyt())
       {cout << "stack is empty"<<endl;
         }
    return S[t];
}

void ArrayStack::push(const int& e)
{
    if(size()==capacity)
    {
        cout<<"stack is empty";
        return;
    }
    S[++t] = e;
}

void ArrayStack::pop()
{
    if (empyt())
    {
        cout << "stack is empty";
        return;
    }
}

int main()
{
    ArrayStack A;

    A.push(7);
    A.push(12);
    A.push(8);
    cout << A.top()<<endl;

    A.top();
    A.push(9);
    cout << A.top() <<endl;

    A.pop();
    cout << A.top() <<endl;

    return 0;
}




