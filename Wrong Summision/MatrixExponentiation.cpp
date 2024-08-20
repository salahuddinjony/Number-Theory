#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 100; // Use a reasonable value for N, e.g., 100 or depending on your problem constraints

void mul(int res[][N], int A[][N], int n) {
    int temp[N][N] = {};  // Temporary matrix to store multiplication result

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                temp[i][j] += res[i][k] * A[k][j];
            }
        }
    }

    // Copy the temp matrix back to res matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = temp[i][j];
        }
    }
}

void matrix(int A[][N], int p, int n) {
    int res[N][N]; // Identity matrix

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = (i == j) ? 1 : 0;
        }
    }

    while (p) {
        if (p % 2 != 0) {
            mul(res, A, n);
            p--;
        } else {
            mul(A, A, n);
            p /= 2;
        }
    }

    // Copy the result back to A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = res[i][j];
        }
    }
}

int main() {
    optimize();
    
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;

        int A[N][N];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> A[i][j];
            }
        }

        matrix(A, p, n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/