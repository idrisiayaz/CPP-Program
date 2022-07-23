#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin>>n;

    if( n%2 == 1 || (n > 5 && n < 21)){
        cout<<"Weird";
    }

    else {
        cout<<"Not Weird";
    }
 
    
    return 0;
}

