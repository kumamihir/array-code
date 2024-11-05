#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     int arr[5]={1,7,9,4,5};
//     int x;
//     cout<<"enter the target : ";
//     cin>>x;
//     for(int i=0;i<5;i++){
//         for(int j=1;j<4;j++){
//             if(arr[i]+arr[j]==x){
//                 cout<<"("<<i<<","<<j<<")";
//                 break;
//             }
//         }
//     }
// }
void display(vector<int>& v){

    // int x;
    // cin>>x;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size()-1;j++){
            if(v[i]+v[j]==x){
                cout<<i<<","<<j;
            }
        }
    }
    
    }

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(34);
    v.push_back(54);
    v.push_back(2);
    v.push_back(9);
    v.push_back(4);
    v.push_back(1);

    int x;
    cout<<" enter the taregt ";
    cin>>x;
     display(v);
}
