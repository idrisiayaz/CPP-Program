#include <bits/stdc++.h>
using namespace std;

//Time complexity will be O(log n base 2)
//Binary Search is better then Linear Search as it takes less time 

int binarySearch(int arr[], int n, int key){

    int s=0; //start element index
    int e=n; //end element index

    while(s<=e){
        int mid = (s+e)/2; //dividing the array with midpoint

        if(arr[mid]==key){ //midpoint index is the key
            return mid;
        }
        else if(key<arr[mid]){ //means the key is less then midpoint that is , key is present in first half
            e=mid-1; //means the end element index 
        }
        else {
            s=mid+1; //means the start element index 
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

    cout<<binarySearch(arr,n,key)<<endl;
    
    return 0;
}