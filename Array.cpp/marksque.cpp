#include<iostream>
using namespace std;
int main(){
    // int arr[6]={34,45,14,67,21,20};
    // for(int i=0;i<=5;i++){
    //     if(arr[i]<35) {
    //         cout<<i<<" ";
    //     }
    // }




    // by user input;

    int arr[6];
    for(int i=0;i<=5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=5;i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
    }
}