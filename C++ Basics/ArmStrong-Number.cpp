#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;
    int orignaln = n;
    int powerof = log10(n) + 1;   

    cout<<powerof<<endl;

    while(n>0){
        int lastdigit = n%10;
        sum+= round(pow(lastdigit,powerof));
        n=n/10;
    }

    if (sum==orignaln)
    {
        cout<<"Arm Strong number"<<endl;
    }
    else {
        cout<<"not Armstrong number"<<endl;
    }
    
    
    return 0;
}