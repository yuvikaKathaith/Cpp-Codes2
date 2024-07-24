#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size, int key){
    //base case
    if(size==0)
        return false;

    if(key==arr[0])
        return true;
    else
        return linearSearch(arr+1,size-1,key);
}

int main(){
    int arr[10]={1,2,4,8,9};
    //int arr[10]={1,3,2,8,7};

    int key=5;
    //int key=2;

    int ans=linearSearch(arr,5,key);
    if (ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}