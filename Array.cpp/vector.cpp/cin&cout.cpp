#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int num;
    cout<<"enter the numbers(0 to stop)";
    while(true){
        cin>>num;
        if(num==0){
            break;
        }
        v.push_back(num);
    }
    cout<<"you entered ";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}

//both methods are corect;
//vector input

#include <iostream>
#include<vector>
using namespace std;
    int main(){
        // int n;
        // n=v.size()
        vector<int> v(5);
        for(int  i=0;i<5;i++){
            cin>>v[i];
        
        }
        for(int i=0;i<5;i++){
            cout<<v[i]<<" ";
        }

    }