#include <bits/stdc++.h>
using namespace std;

//The time complexity will be O(n)

int linearSearch(int arr[], int n, int key){

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key : ";
    cin>>key;

    cout<<linearSearch(arr,n,key)<<endl;
    
    return 0;
}