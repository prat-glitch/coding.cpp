#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    long long D, X, Y;
    cin >> D >> X >> Y;
    
    // Handle edge case where X is already less than or equal to Y
    if (X <= Y) {
      cout << 0 << endl;
      continue;
    }
    
    int cnt = 0;
    long long originalY = Y; // Store the original value of Y
    
    while (X > Y) {
      X -= (X * D) / 100;
      cnt++;
      
      // Update Y only once, in the first iteration
      if (cnt == 1) {
        Y -= (originalY * D) / 100;
      }
      
      // Avoid infinite loop
      if (cnt > 100) {
        break;
      }
    }
    
    if (X <= Y) {
      cout << cnt << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}