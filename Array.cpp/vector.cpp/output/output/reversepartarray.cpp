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
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    dispaly(v);
    reverse(0,3,v);

    dispaly(v);


 }
