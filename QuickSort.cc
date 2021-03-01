

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

int Partition(int arr[], int l, int h){
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[h]);
    return i+1;
}

void QuickSort(int arr[], int l, int h){
    int pivot;
    if(l<h){
        pivot=Partition(arr,l,h);
        QuickSort(arr,l,pivot-1);
        QuickSort(arr,pivot+1,h);
    }
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
        int l=0,h=n-1;
        QuickSort(arr,l,h);
        display(arr,n);
    }
    return 0;
}

