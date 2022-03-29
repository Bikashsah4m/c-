#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    int arr[1006];

    cin>>n>>m;
    int j = n-1;
    int i = m+1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int k=0; k<n; k++){
       cout<< arr[k]<<endl;
    }

}
