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
  vector<int> imp(4);
  rep(i, 4) {
    char a;
    cin >> a;
    imp[i] = a - '0';
  }

  int ma = max_element(length(imp));
  int mi = min_element(length(imp));

  if (ma == mi) {
    cout << "Weak" << endl;
  }

  int pre;

  rep(i, 4)
  {
    if (pre == null) {
      continue;
    }
    if (pre == 9) {
      if (imp[i] != 0) {
        
      }
    } else {

    }
  }
}