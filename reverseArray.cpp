#include<iostream>

using namespace std;

int main(){
    int n,i,j,temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;++i){
        cin>>arr[i];
    }

    for(i=0,j=n-1;i<n/2;++i,--j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    cout<<"Reversal of elements :"<<endl;

    for(i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}