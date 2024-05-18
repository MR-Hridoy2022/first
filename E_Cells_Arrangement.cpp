#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Size of the grid

        // Output the diagonal points
        for (int i = 1; i <= n; i++) {
            cout << i << " " << i << endl;
        }

        // Output one additional point at the corner of the grid
        cout << "1 " << n << endl;
    }

    return 0;
}
