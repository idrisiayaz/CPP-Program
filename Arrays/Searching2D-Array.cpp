#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int x;
    cout<<"Matrix to Find: ";
    cin>>x;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (arr[i][j]==x)
            {
                cout<<"Matrix Found at: "<<"Row: "<<i<<" "<<"Col: "<<j;
            }
        }
    }

    
    return 0;
}
