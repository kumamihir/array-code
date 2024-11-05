#include<iostream>
using namespace std;
// void display(int arr[]){
//     for(int i=0;i<=4;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     display(arr);
    

// }
void display(int a[]){
    for(int i=0;i<=5;i++){
        cout<<a[i]<<" ";
    }
}
    void change(int a[]){
        a[2]=100;
    }
    int main(){
        int a[]={1,2,3,4,5,6};
        display(a);
        cout<<endl;
        change(a);
        cout<<endl;
        display(a);
    }

