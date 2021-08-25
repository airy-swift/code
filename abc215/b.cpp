#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  int cnt = 0;

  while (n > 1) {
    n >>= 1;
    cout << n << endl;
    cnt++;
  }

  cout << cnt << endl;
  return 0;
}