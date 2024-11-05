//here we have a q to find the element x in the array ?

//solution;

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size";
    cin>>n;
    int arr[n];
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
     cout<<"enter target value: ";
     cin>>x;
     int i;
     for(i=0;i<=n-1;i++){
        if(arr[i]==x){
            cout<<"Element Found"<<endl;
            break;
        }
       
     }
}

