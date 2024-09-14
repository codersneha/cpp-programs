#include <iostream>
using namespace std;

int sum_arr(int*** arr,int m, int n, int p){
    int sum=0;
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<p; k++){
                sum= sum + arr[i][j][k];
            }
        }
    }
    return sum;
}


int main(){
    int m,n,p;
    cin>>m>>n>>p;

    int*** arr= new int**[m];

    for(int i=0;i<m; i++){
        arr[i]=new int*[n];
        for(int j=0; j<n; j++){
            arr[i][j]=new int[p];
            for(int k=0; k<p; k++){
                cin>>arr[i][j][k];
            }
        }
    }
    int sum= sum_arr(arr, m,n,p);
    cout<<"sum: "<<sum<<endl;

    return 0;
}