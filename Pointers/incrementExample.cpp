#include <bits/stdc++.h>
using namespace std;

//Example code for understanding memory allocation 
//and increment logic for memory 

int main()
{
    int a=10;
    int* aptr = &a; //for example the memory assigned for variable a=10 is 2000;
    cout<<aptr<<endl; //prints 2000 

    aptr++;
    cout<<aptr<<endl; //after increment it will print 2004 because int takes 4 bytes space in memory
    
    return 0;
}