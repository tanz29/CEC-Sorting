
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

void SelectionSort(int arr[], int n){
    int i,j,temp,index;
    for(i=0;i<n-1;i++){
        temp=arr[i];
        index=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<temp){
                temp=arr[j];
                index=j;
            }
            swap(&arr[i],&arr[index]);
        }
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
        SelectionSort(arr,n);
    }
    return 0;
}
