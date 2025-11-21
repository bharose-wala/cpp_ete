#include <iostream>
#include <ctime>
using namespace std;

int main() {
    //ques7
    long long n = 100000000;  // large number
    long long sum = 0;

    // ------------------- FOR LOOP -------------------
    clock_t start_for = clock();

    sum = 0;
    for (long long i = 1; i <= n; i++) {
        sum += i;
    }

    clock_t end_for = clock();
    double time_for = double(end_for - start_for) / CLOCKS_PER_SEC;

    cout << "For loop sum = " << sum << endl;
    cout << "For loop time = " << time_for << " seconds" << endl;


    // ------------------- WHILE LOOP -------------------
    clock_t start_while = clock();

    sum = 0;
    long long i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    clock_t end_while = clock();
    double time_while = double(end_while - start_while) / CLOCKS_PER_SEC;

    cout << "While loop sum = " << sum << endl;
    cout << "While loop time = " << time_while << " seconds" << endl;

    return 0;
}