#include<iostream>
#include<algorithm>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void MedianSort(int arr[], int n){
    sort(arr, arr+n);
    int temp;
    if(n%2==0){
        temp=arr[(n-1)/2] + arr[n/2];
        cout<<temp/2.0<<endl;
    }
    else
        cout<<arr[n/2]<<endl;
}

int main()
{
    int i,t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        MedianSort(arr,n);
        display(arr,n);
    }
    return 0;
}
