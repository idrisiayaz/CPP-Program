#include <iostream>
#include <math.h>
using namespace std;

bool check(int x,int y,int z){

    int a = max(x, max(y,z)) , b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y){
        b = x;
        c = z;
    }
    else {
        b = x;
        c = y;
    }
    // formula    a*a == b*b + c*c
    if (a*a == b*b + c*c)
        return true;
    else
       return false;
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    if (check(x,y,z))
    {
        cout<<"Pythagorean triplet";
    }
    else {
        cout<< "Not a Pythagorean triplet";
    }
    
    
    return 0;
}