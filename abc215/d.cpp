#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  bool c[m], d[m];
  fill(d, d + m, true);

  int a[m];
  vector<int> ret;

  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    c[a[i]] = true;

  for (int i = 2; i <= m; i++) {
    for (int j = i; j < m; j += i) {
      if (c[j]) {
        for (int k = i; k <= m; k += i)
          d[k] = false;
        break;
      }
    }
  }

  for (int i = 1; i <= m; i++) {
    if (d[i]) {
      ret.push_back(i);
    }
  }
  cout << ret.size() << endl;

  for (auto i : ret)
    cout << i << endl;

  return 0;
}