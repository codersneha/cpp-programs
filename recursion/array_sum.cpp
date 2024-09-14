//array sum with recurrsion


#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> &arr ,int start_index){
    if (start_index==arr.size()-1){
        return arr[start_index];
    } else{
        return arr[start_index]+sum(arr, start_index+1);
    }
}


int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(2);
    cout<<sum(arr, 0)<<endl;
    return 0;
}