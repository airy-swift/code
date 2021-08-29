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

bool can(int h, int now) {
  if (h >= now * 2) {
    return true;
  }
  return false;
}

long long divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    ret.pop_back();
    return ret.back();
}

int main()
{
  ll n;
  cin >> n;

  while (n) {
    if (n % 2)
    {
      cout << 'A';
      n -= 1;
    }
    else
    {
      cout << 'B';
      n /= 2;
    }
  }
  cout << endl;
}