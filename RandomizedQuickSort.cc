#include<iostream>
#include<cstdlib>
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

void Randomization(int arr[], int l, int h){
    int n=h-l+1;
    int temp=rand()%n;
    swap(&arr[l+temp],&arr[h]);

}

void RandQuickSort(int arr[], int l, int h){
    int pivot;
    if(l<h){
        Randomization(arr,l,h);
        pivot=Partition(arr,l,h);
        RandQuickSort(arr,l,pivot-1);
        RandQuickSort(arr,pivot+1,h);
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
        RandQuickSort(arr,l,h);
        display(arr,n);
    }
    return 0;
}


