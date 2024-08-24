//Write a C++ program to find the largest element of a given array of integers.#include <iostream>

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

    int max = arr[0];
    for (int i=1; i<n;++i) {
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    cout<< "largest element: "<<max <<endl;

    return 0;
}
