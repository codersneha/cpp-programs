
#include <iostream>
using namespace std;

int main() {
//     int i=1;
//     while(i<=10000000){
//         cout<<i<<endl;
//         i=i*5;
//     }
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

