#include <iostream>

using namespace std;

int main() {
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;

    if ((X < Y && Z >= X && Z <= Y) || (X > Y && Z <= X && Z >= Y)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
