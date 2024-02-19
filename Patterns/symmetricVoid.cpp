/*
Input Format: N = 3
Result: 
******
**  **
*    *
*    *
**  **
******

*/
#include <iostream>
using namespace std;

void printPattern(int N) {
    // Upper half
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2 * N; j++) {
            if (j < N - i || j >= N + i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = N - 1; i >= 0; i--) {
        for (int j = 0; j < 2 * N; j++) {
            if (j < N - i || j >= N + i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    printPattern(N);
    return 0;
}
