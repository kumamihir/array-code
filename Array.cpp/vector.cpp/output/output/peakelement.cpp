#include<iostream>
#include<vector>
using namespace std;
int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     // int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//         // cout<<arr.at(0);


    int n;
    
   cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
    //    v.push_back(i);
//    int nums;
//    cin>>nums;
//    v.push_back(nums);
cin>>v[i];
    
    }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;

    v.insert(v.begin(),1);
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }

    for(int n: v){
        cout<<n<<" ";
    }


    
    // }


    }


