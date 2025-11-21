#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> a;
    for (long long i = -n; i <= n; i++) a.push_back(i);

    clock_t startW = clock();
    ofstream fneg("neg.txt"), fpos("pos.txt");
    for (auto x : a) {
        if (x < 0) fneg << x << "\n";
        else if (x > 0) fpos << x << "\n";
    }
    fneg.close();
    fpos.close();
    clock_t endW = clock();

    vector<long long> neg2, pos2;
    long long x;

    clock_t startR = clock();
    ifstream fneg2("neg.txt");
    while (fneg2 >> x) neg2.push_back(x);
    fneg2.close();

    ifstream fpos2("pos.txt");
    while (fpos2 >> x) pos2.push_back(x);
    fpos2.close();
    clock_t endR = clock();

    bool loss = true;
    long long ni = 0, pi = 0;
    for (auto v : a) {
        if (v < 0) { if (neg2[ni++] != v) loss = false; }
        else if (v > 0) { if (pos2[pi++] != v) loss = false; }
    }

    cout << "Write time = " << (endW - startW) << " ticks\n";
    cout << "Read time = " << (endR - startR) << " ticks\n";
    cout << (loss ? "Lossless\n" : "Loss detected\n");

    return 0;
}