#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  string s;
  cin >> s;

  ll k, l, f[10], x;
  cin >> k;
  x = 1;

  l = s.size();

  for (int i=0; i<l; i++)
    f[i] = s[i];

  sort(f, f + l);

  do
  {
    if (x == k) 
    {
      for (int i = 0; i < l; i++)
      {
        cout << (char)f[i];
      }
      cout << endl;
      break;
    }
    x++;
  } while (next_permutation(f, f + l));

  return 0;
}