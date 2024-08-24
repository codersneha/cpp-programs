
#include <iostream>

using namespace std;



int main() {
    
    int a=4;
    int* b= &a;
    cout<<b<<endl;
    int** c=&b;
    cout<<c<<endl;
    int*** d=&c;
    cout<<d<<" "<<&d<<endl;


    return 0;
}
