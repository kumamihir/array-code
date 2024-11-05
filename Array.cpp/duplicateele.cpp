#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the arr size : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int i=0;
   int j=n-1;
   while(i<j){
    if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<arr[i]<<endl;
   }
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1] || arr[i-1]==arr[i]){
            cout<<arr[i];
        }
    }
    return -1;
}