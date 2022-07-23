#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a, int *b){
    int old = *a;
    *a = *a + *b;
    if(old > *b){
        *b = old - *b;
    }
    else {
        *b = *b - old;
    }
}

int main() {
    
    int a,b;
    cin>>a>>b;
    
    update(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;
      
    return 0;
}
