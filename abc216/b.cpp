#include <bits/stdc++.h>
using namespace std;
// TYPE
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
/// MACRO
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define srep(i, s, n) for (int i = s; i < (int)n; i++)
#define oo(o) cout << (o) << endl;
#define length(o) (o).begin(), (o).end()

int main()
{
  int n;
  cin >> n;

  vector<string> s(n);
  vector<string> t(n);

  rep(i, n) {
    cin >> s[i] >> t[i];
  }

  for (int i = 0; i < n; i++) {
    string a = s[i] + " " + t[i];
    for (int k = i + 1; k < n; k++)
    {
      if (a == s[k] + " " + t[k])
      {
        oo("Yes");
        return 0;
      }
    }
  }

  oo("No");
}