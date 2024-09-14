#include <iostream>
#include <vector>
using namespace std;


int sum(vector<vector<vector<int> > > arr){
    int sum=0;
    for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[i].size(); j++){
            for(int k=0; k<arr[i][j].size(); k++){
                sum= sum + arr[i][j][k];
            }
        }
    }
    return sum;
}

void print(vector<vector<vector<int> > > arr){
    int sum=0;
    for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[i].size(); j++){
            for(int k=0; k<arr[i][j].size(); k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}


int main(){
    int h,r,c;
    cin>>h;
    vector<vector<vector<int> > > arr(h);

    for (int i = 0; i < h; i++) {// or arr.size()
        cin>>r;
        arr[i] = vector<vector<int> >(r);
        for (int j = 0; j < r; j++) {// or arr[i].size()
            cin>>c;
            arr[i][j] = vector<int>(c);
            for(int k=0; k<c; k++){
                cin >> arr[i][j][k];
            }
        }
    }
    cout<<"sum: "<<sum(arr)<<endl;
    print(arr);
    return 0;
}