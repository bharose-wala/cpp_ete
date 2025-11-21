#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    //ques1
    int n, m;
    cin >> n >> m;

    if (n != m) {
        cout << "Matrix is not square. Inverse does not exist.\n";
        cout << "Conclusion for MCQ: infinite\n";
        return 0;
    }

    int N = n;
    vector<vector<double>> A(N, vector<double>(N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> A[i][j];

    // Build augmented matrix [A | I]
    vector<vector<double>> aug(N, vector<double>(2*N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) aug[i][j] = A[i][j];
        aug[i][N + i] = 1;
    }

    const double EPS_PIVOT = 1e-12;

    // Gauss–Jordan WITHOUT pivoting
    for (int col = 0; col < N; col++) {

        double pivot = aug[col][col];

        // if pivot is zero → singular
        if (fabs(pivot) < EPS_PIVOT) {
            cout << "Matrix is singular (zero pivot). Inverse does not exist.\n";
            cout << "Conclusion for MCQ: infinite\n";
            return 0;
        }

        // normalize pivot row
        for (int j = 0; j < 2*N; j++)
            aug[col][j] /= pivot;

        // eliminate all other rows
        for (int r = 0; r < N; r++) {
            if (r == col) continue;
            double factor = aug[r][col];
            for (int j = 0; j < 2*N; j++)
                aug[r][j] -= factor * aug[col][j];
        }
    }

    // Extract inverse
    vector<vector<double>> inv(N, vector<double>(N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            inv[i][j] = aug[i][N + j];

    // Compute A * inv
    vector<vector<double>> prod(N, vector<double>(N, 0));
    for (int i = 0; i < N; i++)
        for (int k = 0; k < N; k++)
            for (int j = 0; j < N; j++)
                prod[i][j] += A[i][k] * inv[k][j];

    // compute error from identity
    double max_err = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            double expected = (i == j ? 1.0 : 0.0);
            max_err = max(max_err, fabs(prod[i][j] - expected));
        }

    // Output inverse
    cout << fixed << setprecision(10);
    cout << "Inverse matrix:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << inv[i][j] << " ";
        cout << "\n";
    }

    cout << "\nMax error = " << max_err << "\n";

    // MCQ classification
    if (max_err < 1e-9) cout << "Conclusion for MCQ: zero\n";
    else                 cout << "Conclusion for MCQ: non-zero\n";

    return 0;
}