#include<iostream>
using namespace std;
int main(){
    int S, N;
    cin>>S>>N;
    int arr[1005];
    for(int i = 0; i<N; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<N; i++){
        int x = arr[i];
    for(int j = 0; j<N; j++){
        if(x + arr[j+1] == S && x < arr[j+1]){
            cout<<x<<" "<<arr[j+1]<<endl;
        }
    }
}}
