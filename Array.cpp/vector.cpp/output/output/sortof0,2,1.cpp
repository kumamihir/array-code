#include<iostream>
#include<vector>
using namespace std;
void sort03(vector<int> &v){
    int n=v.size();
    int noo=0;
    int noz=0;
    int notw=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noz++;
        else if (v[i]==1) noo++;
        else notw++;
    }
    //filiing;
    for(int i=0;i<v.size();i++){
        if(i<noz) v[i]=0;
        else if(i<(noz+noo)) v[i]=1;
        else v[i]=2;
    }
    return;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    
    }
    cout<<endl;
    sort03(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}