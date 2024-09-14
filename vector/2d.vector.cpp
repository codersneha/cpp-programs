#include <iostream>
#include <vector>
using namespace std;


int sum(vector<vector<int> > arr, int m){
    int sum=0;
    for(int i=0; i<m;i++){
        for(int j=0; j<arr[i].size(); j++){
            sum= sum + arr[i][j];
        }
    }
    return sum;
}

void print(vector<vector<int> > arr, int m){
    for(int i=0; i<m;i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int m,n;
    cin>>m;
    vector<vector <int> > arr(m);

    for (int i = 0; i < m; i++) {
        cin>>n;
        arr[i] = vector<int>(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    print(arr, m);
    cout<<"sum: "<<sum(arr, m)<<endl;
    return 0;
}