//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void swap(int &a, int &b, int &c) {
    int max = 0;
    int min = 100;
    int mid;
    if (max < a) {
        max = a;
    }
    if (max < b) {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    if (min > a) {
        min = a;
    }
    if (min > b) {
        min = b;
    }
    if (min > c) {
        min = c;
    }
    if (a != min || a != max) {
        a = mid;
    }
    if (b != min || b != max) {
        b = mid;
    }
    if (c != min || c != max) {
        c = mid;
    }
    a = min;
    b = mid;
    c = max;
}
void swap(int &a, int &b, int &c, int &d) {
    swap(a, d);
    swap(a, c);
    swap(a, b);
}