#include <iostream>
using namespace std;

void InsertionSort(int A[], int n){
    for(int i=1; i<n; i++){
        int current = A[i];
        int j;
        for(j=i-1; j>=0; j--){
            if(current < A[j]){
                A[j+1] = A[j];
            }
        else{
            break;
        }
        }
        A[j+1] = current;
    }
}

void printArray(int input[], int n){
    for(int i=0;i<n; i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;
    int input[100000];
    for(int i = 0; i<n; i++){
        cin>>input[i];
    }

    InsertionSort(input, n);
    printArray(input,n);

}
