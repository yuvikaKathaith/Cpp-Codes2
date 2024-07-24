#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    //base case
    if(size==1 || size==0)
        return true;

    if(arr[0]>arr[1])
        return false;

    else
        return isSorted(arr+1, size-1);
}

int main(){
    int arr[10]={1,2,4,8,9};
    //int arr[10]={1,3,2,8,7};

    int ans=isSorted(arr,5);
    if (ans){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
    return 0;
}