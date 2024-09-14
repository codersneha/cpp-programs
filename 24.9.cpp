#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


int main() {
	vector<string> arr ;
	arr.push_back("sneha");
	arr.push_back("mitra");
	arr.push_back("sneha");
	arr.push_back("sneha");
	int n= arr.size();
	// vector<int> arr = vector<int> (n, 1); //{1, 1, 1, 1, 1}
	// for(int i=0;i<n;i++) {
    //  	cin>>arr[i];}
	// arr.push_back(1);
	map <string, int> count; // empty
	for(int i = 0;i<n;i++) {
    	count[arr[i]]++; //1->2
	}
	for(int i=0;i<n;i++) {
    	cout<<arr[i]<<" "<<count[arr[i]]<<endl;
	}
}