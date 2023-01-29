#include<bits/stdc++.h>
using namespace std;

int KthElementsMin(int arr[], int N, int K){
    sort(arr,arr+N);
    return arr[K-1];
}

int KthElementsMax(int arr[], int N, int K){
    sort(arr,arr+N,greater<int>());
    return arr[K-1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int k;
    cin>>k;
    cout<<"Kth Smallest element: "<<KthElementsMin(arr,n,k);
    cout<<endl;
    cout<<"Kth Largest element: "<<KthElementsMax(arr,n,k);
    cout<<endl;
}