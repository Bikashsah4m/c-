#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    float sum = 0;

    int a[10000];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    for(int j =0; j<n; j++){
        cout<<a[j]<<endl;
    }

    for(int k=0; k<n;k++){
        sum = sum + a[k];
    }
    cout<<"sum is:"<<sum<<endl;
}
