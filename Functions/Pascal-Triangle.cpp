#include <iostream>
#include <math.h>
using namespace std;

// f = factorial

int fact(int number){
    int factorial=1;
    for(int i=2;i<=number;i++){
        factorial *= i;
    }
    return factorial;
}


int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<< fact(i) / (fact(j) * fact(i-j)) <<" ";
        }
        cout<<endl;
    }
    
    return 0;
}