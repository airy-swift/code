#include <bits/stdc++.h>
using namespace std;
// TYPE
using ll = long long;
using vi = vector<int>;
/// MACRO
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define srep(i, s, n) for (int i = s; i < (int)n; i++)
#define oo(o) cout << o << endl;
#define length(o) o.begin(), o.end()


void compress(vector<int> &X) {
    vector<int> vals = X;
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());
    rep(i,vals.size()) {
      oo(vals[i]);
    }
    for (int i = 0; i < (int)X.size(); i++)
    {
      oo(X[i]);
      X[i] = lower_bound(vals.begin(), vals.end(), X[i]) - vals.begin();
      oo(X[i]);
      oo("");
    }
    return;
}


vector<int> ompress(vector<int> a){
    int n = a.size();
    map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[a[i]] =0;
    }
    int id=1;
    for(auto& p : mp){
        p.second=id++;
        oo(p.first);
        oo(p.second);
        oo(" ");
    }
    for(int i=0; i<n; i++){
        a[i]=mp[a[i]];
    }
    return a;
}

int main(){
  int h, w, n;
  
  cin >> h >> w >> n;
  
  vector<int> a(n), b(n);
  
  for(int i=0; i<n; i++){
    cin >> a[i] >> b[i];
  }
  
  a = ompress(a);
  b = ompress(b);
  
  for(int i=0; i<n; i++){
    printf("%d %d\n", a[i], b[i]);
  }
  
  return 0;
}