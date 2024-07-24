#include<iostream>
using namespace std;

void sortArray(int arr[], int size){
    //base case - array already sorted 
    if(size==0 || size==1)
        return;
    //first case solved- ye largest element ko last mein pohoncha dega
    for(int i =0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call
    sortArray(arr,size-1);
}
int main(){
    int arr[10]={1,6,3,2,5};

    sortArray(arr,5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}