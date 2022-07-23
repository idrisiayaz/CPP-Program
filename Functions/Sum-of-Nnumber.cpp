#include <iostream>
#include <math.h>
using namespace std;

// f = factorial

int sum(int number){
    int initial= 0;
    for(int i=1;i<=number;i++)
       initial+=i;
    return initial; 
}


int main()
{
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    
    return 0;
}