#include<iostream>
using namespace std;

int power(int n){
    //base case
    if(n==0)
        return 1;

    return 2*power(n-1);    //recursion used : function calling itself in its definition
}

int main(){
    int n;
    cin>>n;

    int ans=power(n);
    cout<<ans<<endl;

    return 0;
}