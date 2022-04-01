#include<bits/stdc++.h>
using namespace std;

int print(int arr[], int n){
    for(int i=0; i<n; i++){
    cout<< arr[i]<<" ";
}
}


void sorti(int arr[], int n){
int i=0, j=n-1;
while(i<j){
    while(arr[i]==0 && i<j){
        i++;
    }
    while(arr[j]==1 && i<j){
        j--;
    }
    if(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

}

int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sorti(arr, n);
    print(arr, n);
}
