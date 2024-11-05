#include<iostream>
#include<vector>
using namespace std;

void dispaly(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
 void reverse(int i,int j,vector<int> & v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
 }
 int main(){
    vector<int> v;
 
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);

    dispaly(v);
int k;
cout<<" enter the target rotatary : ";
cin>>k;
int n=v.size();
 reverse(0,n-k-1,v);
 reverse(n-k,n-1,v);
 reverse(0,n-1,v);

 dispaly(v);



   

    


 }
