#include<iostream>
using namespace std;

void printCounting(int n){
    //base case
    if (n==0)
        return;
    
    //from 1 to n
    cout<<n<<endl;
    printCounting(n-1);

    //from n to 1
    // printCounting(n-1);
    // cout<<n<<endl;
}

int main(){
    int n=6;
    // cin>>n;

    printCounting(n);

    return 0;
}