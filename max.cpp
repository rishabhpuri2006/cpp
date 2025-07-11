#include<iostream>
using namespace std;
int main(){
    int n;
    int max=arr[0];
    cout<<"enter number";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        if(arr[j]>max){
        cout<<max;
        }
    }
    else{
        cout<<arr[0];
    }
    return 0;
}