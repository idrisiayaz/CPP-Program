#include <cmath>
#include <cstdio>
#include<math.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    int i2;
    double d2;
    string s2;
   
    cin >> i2;
    cin >> d2;
    cin.get();
    getline(cin, s2);

    cout << i+i2 << endl;

    cout<<fixed;
    cout.precision(1);
    cout<<d + d2 <<endl; 

    cout << s << s2;
    
    return 0;
}
