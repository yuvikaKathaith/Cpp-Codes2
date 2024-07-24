#include<iostream>
using namespace std;

int printSum(int arr[],int size){
    //base case
    if(size==0)
        return 0;
    if(size==1)
        return arr[0];

    int Remainingpart=printSum(arr+1,size-1);
    int sum=arr[0]+ Remainingpart;

    return sum;
    
}

int main(){
    int arr[10]={3,2,5,1,6};

    int ans=printSum(arr,5); 
    cout<<"the sum is : "<<ans<<endl; //15

    return 0;
}