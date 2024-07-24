#include<iostream>
using namespace std;

bool isPalindrome(string str,int i,int j){
    //base case
    if(i>j)
        return false;
    if(str[i] != str[j])
        return false;
    else
        isPalindrome(str,i+1,j-1);

}

int main(){
    string str="racecar";
    if(isPalindrome(str,0,str.length()-1))
        cout<<"its a palindrome"<<endl;
    else 
        cout<<"its not a palindrome"<<endl;

    return 0;
}