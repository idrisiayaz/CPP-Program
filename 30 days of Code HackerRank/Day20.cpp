#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int numSwaps = 0;

    for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
    
    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            numSwaps++;
        }
    }
    
    // If no elements were swapped during a traversal, array is sorted
    if (numSwaps == 0) {
        break;
    }
}

    cout<<"Array is sorted in "<<numSwaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;

    return 0;
}
