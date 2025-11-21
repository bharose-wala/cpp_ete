#include <iostream>
#include <ctime>
using namespace std;

// Function A: uses "+" operator
int add_with_plus(int a, int b) {
    return a + b;
}

// Function B: does NOT use +, -, *, /
// Uses bitwise operations instead
int add_without_plus(int a, int b) {
    while (b != 0) {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int main() {
    int a = 123456, b = 987654;
    int result;

    // Test 1: using "+"
    clock_t start1 = clock();
    for (int i = 0; i < 10000000; i++) {
        result = add_with_plus(a, b);
    }
    clock_t end1 = clock();
    double time_plus = double(end1 - start1) / CLOCKS_PER_SEC;


    // Test 2: without using "+"
    clock_t start2 = clock();
    for (int i = 0; i < 10000000; i++) {
        result = add_without_plus(a, b);
    }
    clock_t end2 = clock();
    double time_no_plus = double(end2 - start2) / CLOCKS_PER_SEC;


    // Print results
    cout << "Time using + operator = " << time_plus << " sec" << endl;
    cout << "Time without + operator = " << time_no_plus << " sec" << endl;

    return 0;
}