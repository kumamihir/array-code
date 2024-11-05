#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int pos;
    cin>>pos;
     for (int i = i; i <= pos; i++)
        arr[i+1] = arr[i];
 
    arr[pos] = x;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
