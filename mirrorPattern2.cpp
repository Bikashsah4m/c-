#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int spaces=1; spaces<=i-1; spaces=spaces+1){
            cout<<" ";
        }
        for(int cha=1; cha<=n-i+1; cha=cha+1){
            cout<<n - cha + 2 -i ;
        }
        cout<<endl;
    }
}
