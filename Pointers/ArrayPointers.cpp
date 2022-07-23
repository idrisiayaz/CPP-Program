#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,20,30};
    cout<<arr<<endl; //prints the memory address of array
    cout<<*arr<<endl; //prints the zero'th element of array

    int *ptr= arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    //printing without ptr and directing using arr value
    // for(int i=0;i<3;i++){
    //     cout<<*(arr + i)<<endl; here arr is an indexing pointer so it goes to next index and not next memory location
    //     //arr++; illegal
    // }
    
    return 0;
}