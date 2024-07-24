#include<iostream>
using namespace std;

bool binarySearch(int arr[],int size, int key,int s, int e){
    //base case

    //if element not found
    if(s>e)
        return -1;

    int mid=s+(e-s)/2;
    //element found
    if(key==arr[mid])
        return true;
    if(key>arr[mid])
        return binarySearch(arr,size,key,mid+1,e);
    else 
        return binarySearch(arr,size,key,s,mid-1);
}

int main(){
    int arr[10]={1,2,4,8,9};
    //int arr[10]={1,3,2,8,7};
    int size=5;
    int key=9;
    //int key=2;
    int s=0;
    int e=size-1;

    int ans=binarySearch(arr,size,key,s,e);
    if (ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}