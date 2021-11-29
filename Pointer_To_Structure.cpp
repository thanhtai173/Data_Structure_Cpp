#include <iostream>
using namespace std;

struct rectangle{
    double length = 10;
    double width = 30;
};

int main(){
    rectangle a;
    cout << "Length of rectangle a: ";
    cin >> a.length;
    cout << "Width of rectangle a: ";
    cin >> a.width;
    rectangle *p; // pointer has same type with variable being pointed
    p = &a;
    cout << "Length of rectangle a from p: " << p->length << endl;
    cout << "Width of rectangle a from p: " << p-> width << endl;
}