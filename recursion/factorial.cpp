//factorial


#include <iostream>
using namespace std;

int f(int n){
    if (n==0){
        return 1;
    } else if (n==1){
        return 1;
    } else{
        return n*f(n-1);
    }
}


int main(){
    int n;
    cin>>n;

    for(int i=0; i<=n; i++){
        cout<<f(i)<<endl;
    }

    return 0;
}