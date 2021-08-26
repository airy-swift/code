#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int s, t;
  cin >> s >> t;

  ll ret = 0;

  for (int i = 0; i <= s; i++) {
    for (int k = 0; k <= s; k++) {
      for (int m = 0; m <= s; m++) {
        if ((i + k + m) <= s) {
          if ((i * k * m) <= t) {
            ret++;
          }
        }
      }
    }
  }

  cout << ret << endl;
  return 0;
}