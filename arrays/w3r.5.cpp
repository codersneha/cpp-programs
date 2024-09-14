
#include <iostream>
using namespace std;

int find_second_smallest_element(int* arr, int n){
    
    int first =arr[0]; 
    int second=INT_MAX; 

    for (int i= 0; i<n; ++i) {
        if (arr[i]==first){
            continue;
        }else if (arr[i]<first) {
            second=first; 
            first=arr[i]; 
        } else if (arr[i] < second) {
            second=arr[i];
        }
    }

    return second;
}

int main( ){
        int n ;
    cout<<"number of elements:";
    cin >> n;
    int arr[n]; 
    cout << "the elements: ";
    for(int i=0; i<n ;++i) {
        cin>> arr[i];
    }
    int second_max =find_second_smallest_element(arr,n);
     
    cout << "The second smallest element: " <<second_max<<endl;

    
    return 0;
}