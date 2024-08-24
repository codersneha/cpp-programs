
#include <iostream>

using namespace std;



int main() {
    int a_a=5;
    int b_b=2;
    //double c_c= a_a/b_b;
    double c_c= (double)a_a/b_b; // type casting
    double x=3;
    double y=2;
    cout<<(int)(x/y)<<endl;
    cout<<c_c<<endl;

    char input_c;
    cin>> input_c;
    switch(input_c) {
        case 'a':
        cout<<"first vowel\n";
        case 'e':
        cout<<"second vowel\n";
        default:
        cout<<"everything else";
    }

}
