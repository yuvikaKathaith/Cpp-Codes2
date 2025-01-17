#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    //place pivot at right position
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);
    
    //left and rigth part sambhal lo left part smaller and right part greater
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while (arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s,int e){
    //base case 
    if(s>=e)
        return;
    //partition kardo
    int p=partition(arr,s,e);

    //left wala part sort 
    quickSort(arr,s,p-1);
    //rigth wala part sort
    quickSort(arr,p+1,e);
}
int main(){
    int arr[10]={1,9,3,2,5};
    int n=5;    
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}