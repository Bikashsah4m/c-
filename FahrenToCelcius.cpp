
#include <iostream>
using namespace std;

void value(int S, int E, int W){
    for(int i=S; i<=E; i=i+W){

        int celcius = (5.0/9.0)*(i-32);
        cout<<i<<" "<<celcius<<endl;
    }
}
int main(){
    int a, b, c;
    cin>>a>>b>>c;

    value(a, b, c);

}
