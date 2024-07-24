#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0)
        return 1;

    int smallerProblem = factorial(n-1);
    int biggerProblem = n*smallerProblem;

    return biggerProblem;    //recursion used : function calling itself in its definition
}

int main(){
    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<ans<<endl;

    return 0;
}