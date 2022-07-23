#include<bits/stdc++.h>
using namespace std;

//Also asked by Vistaar in aptitude Exam in terms of coins and balance
//This one not working with input arr and target
//Time Complexity O(n*2)

bool pairsum(int arr[],int n, int k){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == k){
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<arr[i]+arr[j]<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[] = {2 ,4 ,7 ,11 ,14 ,16 ,20 ,21};

    int k = 31;

    cout << pairsum(arr,8,k) << endl;

    return 0;
}
