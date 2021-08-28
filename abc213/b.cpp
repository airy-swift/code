#include <bits/stdc++.h>
using namespace std;

// TYPE
using ll = long long;
// MACRO
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define oo(o) cout << o << endl;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n), b(n);

  rep(i, n) {
    cin >> a[i];
  }
  b = a;

  sort(a.begin(), a.end());

  a.pop_back();
  int ansHave = a.back();
  rep(i, n) {
    if (b[i] == ansHave) {
      oo(i + 1);
      break;
    }
  }

  return 0;
}