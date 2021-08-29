#include <bits/stdc++.h>
using namespace std;
// TYPE
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
/// MACRO
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define srep(i, s, n) for (int i = s; i < (int)n; i++)
#define oo(o) cout << o << endl;
#define all(o) o.begin(), o.end()

template<class T> std::vector<std::string> split(const std::string& s, const T& separator, bool ignore_empty = 0, bool split_empty = 0) {
  struct {
    auto len(const std::string&             s) { return s.length(); }
    auto len(const std::string::value_type* p) { return p ? std::char_traits<std::string::value_type>::length(p) : 0; }
    auto len(const std::string::value_type  c) { return c == std::string::value_type() ? 0 : 1; /*return 1;*/ }
  } util;
  
  if (s.empty()) { /// empty string ///
    if (!split_empty || util.len(separator)) return {""};
    return {};
  }
  
  auto v = std::vector<std::string>();
  auto n = static_cast<std::string::size_type>(util.len(separator));
  if (n == 0) {    /// empty separator ///
    if (!split_empty) return {s};
    for (auto&& c : s) v.emplace_back(1, c);
    return v;
  }
  
  auto p = std::string::size_type(0);
  while (1) {      /// split with separator ///
    auto pos = s.find(separator, p);
    if (pos == std::string::npos) {
      if (ignore_empty && p - n + 1 == s.size()) break;
      v.emplace_back(s.begin() + p, s.end());
      break;
    }
    if (!ignore_empty || p != pos)
      v.emplace_back(s.begin() + p, s.begin() + pos);
    p = pos + n;
  }
  return v;
}

int main()
{
  string xy;
  cin >> xy;
  vector<string> a = split(xy, ".");
  int x = stoi(a[0]);
  int y = stoi(a[1]);

  if (y >= 0 && y <= 2) {
    cout << x << "-" << endl;
    return 0;
  }
  if (y >= 7 && y <= 9) {
    cout << x << "+" << endl;
    return 0;
  }
  cout << x << endl;
}