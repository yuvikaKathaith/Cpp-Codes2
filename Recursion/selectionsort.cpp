#include<iostream>
using namespace std;

void sortArray(int arr[], int size,int startIndex=0){
    //base case - array already sorted 
    if(size==0 || size==1)
        return;

    //first case solved- ye smallest element ko first mein pohoncha dega
    int min=startIndex; 
    for(int i=startIndex+1; i<size;i++){ 
        if(arr[i]<arr[min]){
            min=i; 
        }
    }
    swap(arr[startIndex],arr[min]);
    //recursive call
    sortArray(arr,size-1,startIndex+1);
}
int main(){
    int arr[10]={1,6,3,2,5};

    sortArray(arr,5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}