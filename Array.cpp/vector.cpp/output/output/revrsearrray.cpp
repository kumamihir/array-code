#include<iostream>
using namespace std;

void change(int arr[]){
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    change(arr);
    
    // for(int i=0;i<=4;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=4;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }
}