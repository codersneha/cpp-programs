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

    int max = 0;
    int freq;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            freq = arr[i];
        }
    }
    cout << "most frequent element: " << freq << endl;

    return 0;
}
