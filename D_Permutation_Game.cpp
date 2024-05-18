#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, k, PB, PS;
        cin >> n >> k >> PB >> PS; // Length of the permutation, duration of the game, starting positions

        vector<int> p(n), a(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i]; // Elements of permutation p
        }
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // Elements of array a
        }

        vector<long long> scores(n + 1, 0); // Bodya's and Sasha's scores

        // Calculate scores after k turns
        for (int i = 0; i < n; i++) {
            scores[p[i]] += a[i];
        }

        long long bodya_score = scores[PB];
        long long sasha_score = scores[PS];

        // Determine the winner
        if (bodya_score > sasha_score) {
            cout << "Bodya" << endl;
        } else if (sasha_score > bodya_score) {
            cout << "Sasha" << endl;
        } else {
            cout << "Draw" << endl;
        }
    }

    return 0;
}
