#include <bits/stdc++.h>

using namespace std;

int main() {

    float mealCost;int tipPercent,taxPercent; 
    cin>>mealCost>>tipPercent>>taxPercent;
    
    float tip = (mealCost/100)*tipPercent;
    float tax = (mealCost/100)*taxPercent;
    float totalCosts = round(mealCost + tip + tax);

    cout<<totalCosts<<endl;
    
    return 0;
}
