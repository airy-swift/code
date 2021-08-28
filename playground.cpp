#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  const long int MAX = 100000;
  vector<int> a(MAX);

  for (int i = 0; i < 100; i++) {
    a[i] = i + 1;
  }

  for (int i : a) {
    if (i == 0) {
      break;
    }
    cout << i << endl;
  }

  return 0;
}