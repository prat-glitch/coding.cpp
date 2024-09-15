#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    int cnt = 0;
    int mini = INT_MAX;
    while (T--) {
        int X;
        cin >> X;
        int Y;
        cin >> Y;
        if (X >= 2 * Y || Y >= 2 * X)
            cnt = 0;
        else if (X >= 2 * Y) {
            if (Y > 0) {
                Y--;
                cnt++;
                mini = min(mini, cnt);
            }
        } else {
            if (X > 0) {
                X--;
                cnt++;
                mini = min(mini, cnt);
            }
        }
    }
    return 0;
}