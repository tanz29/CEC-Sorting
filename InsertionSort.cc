
#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void InsertionSort(int arr[], int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    display(arr,n);
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
        InsertionSort(arr,n);
    }
    return 0;
}

