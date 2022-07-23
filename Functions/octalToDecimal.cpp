#include <iostream>
#include <math.h>
using namespace std;

int octalToDecimal(int n){
    int ans = 0;
    int x = 1;  //initialising base as 1

    while(n>0){
        int y = n%10;
        ans += x*y;
        x *= 8; // For octal the base is 8. (Base 8)
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<< octalToDecimal(n) <<endl;
    
    return 0;
}