#include<bits/stdc++.h>
using namespace std;

//Also asked by Vistaar in aptitude Exam in terms of coins and balance
//This one not working with input arr and target
//In this program the time comeplexity is O(n)

bool pairsum(int arr[],int n, int k){
    int low = 0;
    int high = n-1;

    while(low<high){
        if (arr[low] + arr[high] == k)
        {
            cout<<arr[low]<<" + "<<arr[high]<<" = "<<arr[low]+arr[high]<<endl;
            return true;
        }
        else if (arr[low] + arr[high] > k){
            high--;
        }
        else {
            low++;
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
