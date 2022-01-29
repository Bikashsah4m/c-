#include<iostream>
using namespace std;

int main(){
int a, b;
cout<<"Enter two numbers"<<endl;
cin>> a>> b;

/*if(a==b){
    cout<<"Both are equal"<<endl;
}
else if(a>b){
    cout<<"A is greater"<<endl;
}
else{
    cout<<"B is greater"<<endl;
}
}*/

if(a==b){
    cout<<"Both are equal"<<endl;
}
else{
    if(a>b){
        cout<<"A is greater"<<endl;
    }

    else{
        cout<<"B is greater"<<endl;
    }

}
}
