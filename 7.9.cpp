//fibonacci


#include <iostream>
#include <map>
using namespace std;

long long f(int n, map<int,long long> &fibo){
    if (n==0){
        return 0;
    } else if (n==1){
        return 1;
    } else{
        //if nth fibonacci was calculated before or not
        if(fibo.find(n)!=fibo.end()) {
            return fibo[n];
        }
        //otherwise store the computation and return
        fibo[n]=f(n-1,fibo)+f(n-2,fibo);
        return fibo[n];
    }
}


int main(){
    int n;
    cin>>n; 

    map <int, long long> fibo;

    for(int i=0; i<=n; i++){
        cout<<i<<"th fibonacci series is : "<<f(i,fibo)<<endl;
    }


    return 0;
}