#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    for(int i=1; i<=n; i=i+1){
        for(int spaces = 1; spaces<= n-i; spaces =spaces+1){
            cout << " "
            cout<<' ';
        }
        for(int star = 1; star<=i; star = star+1){
            cout<<'*';
        }
        cout<<endl;
    }
}
