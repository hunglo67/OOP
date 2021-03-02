
#include<iostream>
#include<stdio.h>
using namespace std;
class A
{
public:
    A()

    {
        cout << "Constructor \n";
    }

    // destructor
    ~A()
    {
        cout << "Destructor\n";
    }
};

int main()
{
    {
        A() ;   // Constructor Called
    }
return 0;
}