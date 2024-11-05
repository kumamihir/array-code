#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the array size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<max;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// string p;
// cin >> p;
// char f = '?', s = '?';
// for (auto &i : p) {
// if (f == '?' || i > f) {
// s = f;
// f = i;
// } else if (i > s) {
// s = i;
// }
// }
// cout << s;
// }