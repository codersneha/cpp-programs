//Write a recursive function that finds and returns the minimum element in an array, where the array and its size are given as parameters.

#include <iostream>  
#include <vector>  
using namespace std;

int min(vector<int> arr,int n){
    if (n == 1) {
        return arr[0];
    }
    int rest_arr_min = min(arr,n-1);
    if (arr[n - 1] < rest_arr_min) {
        return arr[n - 1];
    } else {
        return rest_arr_min;
    }
}

int main(){

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(2);

    int n = arr.size();

    cout<< "min element: "<< min(arr,n) <<endl;

    return 0;
}