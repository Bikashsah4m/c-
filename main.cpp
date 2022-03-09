#include <iostream>
using namespace std;
 
 
 
 int main(){
     int n;
    cin>>n;
    int A[10000];
    for(int i=0;i<n;i=i+1){
     cin>>A[i];
    }
    for (int j=0;j<n;j=j+2){
        cout<<A[j]<<endl;
    }
 }