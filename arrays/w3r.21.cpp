#include <iostream>
using namespace std;

int main() {
    int n; 

    cout<<"number of elements:";
    cin >> n;

    int arr[n]; 
    cout << "the elements: ";
    for(int i=0; i<n ;++i) {
        cin>> arr[i];
    }
    int arr1[n];
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr1[index++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            arr1[index++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
