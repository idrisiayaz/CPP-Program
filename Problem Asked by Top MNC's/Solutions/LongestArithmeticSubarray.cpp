#include<bits/stdc++.h>
using namespace std;
//Question-Google Kickstart
// Saraswati has an array  of N-non-negative integers. The i-th integer of the array is Ai. She wants to choose
//  a contagious arithmetic sub array from her array that has maximum length.
//  please help her to determine the length of the longest contigious arithmetic subarray.

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = 2;
    int pd = arr[1]-arr[0];
    int j = 2;
    int curr = 2;

    while (j<n){
        if (pd == arr[j] - arr[j-1])
        {
            curr++;
        }
        else {
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }

    cout<<ans<<endl;

    return 0;
}