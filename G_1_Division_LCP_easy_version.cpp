#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> buildSuffixArray(const string& s) {
    int n = s.size();
    vector<int> sa(n), rk(n);

    for (int i = 0; i < n; ++i) {
        sa[i] = i;
        rk[i] = s[i];
    }

    for (int k = 1; k < n; k *= 2) {
        auto cmp = [&](int a, int b) {
            if (rk[a] != rk[b]) return rk[a] < rk[b];
            int ra = (a + k < n) ? rk[a + k] : -1;
            int rb = (b + k < n) ? rk[b + k] : -1;
            return ra < rb;
        };
        sort(sa.begin(), sa.end(), cmp);

        vector<int> newRk(n);
        newRk[sa[0]] = 0;
        for (int i = 1, rkValue = 0; i < n; ++i) {
            if (cmp(sa[i - 1], sa[i])) ++rkValue;
            newRk[sa[i]] = rkValue;
        }
        rk = newRk;
    }

    return sa;
}

vector<int> buildLCPArray(const string& s, const vector<int>& sa) {
    int n = s.size();
    vector<int> lcp(n);

    vector<int> invSa(n);
    for (int i = 0; i < n; ++i) {
        invSa[sa[i]] = i;
    }

    int k = 0;
    for (int i = 0; i < n; ++i) {
        if (invSa[i] == n - 1) {
            k = 0;
            continue;
        }
        int j = sa[invSa[i] + 1];
        while (i + k < n && j + k < n && s[i + k] == s[j + k]) {
            ++k;
        }
        lcp[invSa[i]] = k;
        if (k > 0) --k;
    }

    return lcp;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        --l, --r; // Adjust indices to 0-based indexing

        string s;
        cin >> s;

        vector<int> sa = buildSuffixArray(s);
        vector<int> lcp = buildLCPArray(s, sa);

        for (int i = l; i < r; ++i) {
            cout << lcp[i] << " ";
        }
        cout << lcp[r] << endl;
    }

    return 0;
}
