//Write a recursive function that computes the sum of all numbers from 1 to n, where n is given as parameter.


#include <iostream>  
using namespace std;

int sum(int n){
    if (n==0){
        return 0;
    } else{
        return n+sum(n-1);
    }
}

int main(){
    int n;
    cin>>n; 

    cout<<"sum of n no: "<<sum(n)<<endl;

    return 0;
}