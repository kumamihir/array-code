#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5};
int *ptr=arr;//give address
cout<<ptr<<endl;//print address=0x61fef8
cout<<*ptr<<endl;//print arr[0] that is 1;
cout<<arr[3]<<endl;


for(int i=0;i<=4;i++){
    cout<<ptr[i]<<" ";// output is 12345;
}
cout<<endl;

*ptr=7;//sometimes you can often use ptr[0]=7 it will also give the same output;
for(int i=0;i<=4;i++){
    cout<<ptr[i]<<" ";
}


}


 