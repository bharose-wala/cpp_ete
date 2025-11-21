#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n , m ; cin >> n >> m ;
    // taking the input for the matrix
    vector<vector<int>> matrix(n, vector<int>(m));
    // taking input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    // calculate matrix invese

    // then also find error in the calculation
    // for another mcq . conclude whether error is zero , non zero or infinite
    return 0;
}

// Q3 