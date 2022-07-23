#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int* aptr;
    aptr = &a;

    cout<<&a<<endl; //prints the memory address where a variable is stored
    cout<<aptr<<endl; //prints the value of aptr that is the value of &a
    cout<<*aptr<<endl; //prints the value stored in variable "a" at the given location
    
    return 0;
}