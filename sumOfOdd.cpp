#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int arr[1000];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    for(int j = 0; j<n; j++){
        if(arr[j]%2 != 0){
            sum = sum + arr[j];
        }


        }
        cout<<sum<<endl;
    }

