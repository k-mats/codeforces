#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <limits>
#include <algorithm>
#include <utility>
#include <cstdlib>
#include <cmath>

// using
using namespace std;

// typedef
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<string> VS;
typedef vector<long> VL;
typedef long long LL;
typedef vector<LL> VLL;

// container utils
#define PB push_back
#define PF push_front
#define GRT(x) greater<(x)>()
#define ASORT(x) sort((x).begin(), (x).end())
#define DSORT(x, y) sort((x).begin(), (x).end(), greater<(y)>())
#define FILL(x, y) fill((x).begin(), (x).end(), (y))
#define COPY(x, y) (y).clear(); \
  copy((x).begin(), (x).end(), back_inserter(y))

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORL(i, a, b) for (long i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REPL(i, n) FORL(i, 0, n)

// output
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define P(x) cout << (x) << endl

// static const
static const double EPS = 1e-10;
static const double PI = 6.0 * asin(0.5);

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

typedef map<string, int> MSI;

void solve() {
  string s, p;
  cin >> s >> p;
  if (p.size() > s.size()) {
    cout << 0 << endl;
    return;
  }
  
  LL a[26];
  REP(i, 26) {
    a[i] = 0;
  }

  REP(i, p.size()) {
    a[p[i]-'a']++;
  }

//   REP(i, 26) DUMP2(i, a[i]);
  LL aa[26];
  LL sum = 0;
  LL ans = 0;
  string sub;
  MSI memo;
  bool flag;
  REP(i, s.size()-p.size()+1) {
    sub = s.substr(i, p.size());
    if (memo[sub] == 0) {
      REP(k, 26) {
	aa[k] = 0;
      }
      flag = true;
      REP(j, p.size()) {
	if (sub[j] != '?') 
	  flag = false;
      }
      if (flag) {
	memo[sub] = 1;
	ans++;
	continue;
      }

      FOR(j, 0, p.size()) {
	if (sub[j] != '?') {
	  aa[sub[j]-'a']++;
	  if (a[sub[j]-'a'] < aa[sub[j]-'a']) {
	    memo[sub] = -1;
	    break;
	  }
	}
      }
      if (memo[sub] == 0) {
	memo[sub] = 1;
	ans++;
      }
    } else if (memo[sub] == 1) {
//       DUMP2(sub, memo[sub]);
      ans++;
    }
  }
  P(ans);
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
