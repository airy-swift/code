#include <bits/stdc++.h>
using namespace std;

#define N 1000000007
using ll = long long;

int main() {

  int n;

  cin >> n;
  vector<int> s;
  vector<int> t;
  int tmp;
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    s.push_back(tmp);
  }
  for (int i = 0; i < n; i++) {
    cin >> tmp;
    s.push_back(tmp);
  }

  vector<vector<bool>> ret[n][N];
  for (int i = 0; i < n; i++) {
    fill(ret[i], ret[i] + N, false);
    ret[i][t[i]] = true;
  }

  cout << "hello" << endl;

  for (int i = 0; i < n; i++) {
    for (bool j : ret[i]) {
      if (j == true) {
        int next = i + 1;
        if (next <= n) {
          next = 0;
        }
        ret[next][s[i + j]] = true;
        break;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (bool j : ret[i]) {
      if (j == true) {
        cout << j << endl;
        break;
      }
    }
  }
}