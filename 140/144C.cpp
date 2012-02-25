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
#include <iomanip>
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
#define FORLL(i, a, b) for (LL i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REPL(i, n) FORL(i, 0, n)
#define REPLL(i, n) FORLL(i, 0, n)

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

void solve() {
  string s, p;
  cin >> s >> p;

  long pal[26];
  long subal[27];
  long ps = (long)p.size();
  long ss = (long)s.size();
  long ans = 0;
  string sub = s.substr(0, ps);

  if (ps > ss) {
    P(0);
    return;
  }
  
  REP(i, 26) pal[i] = 0;
  REP(i, 27) subal[i] = 0;

  REPL(i, ps) {
    pal[p[i]-'a']++;
  }

  REPL(i, ps) {
    if (sub[i] != '?') subal[sub[i]-'a']++;
    else subal[26]++;
  }


  REPL(i, ss-ps+1) {
    if (i > 0) {
      if (sub[0] != '?') {
	subal[sub[0]-'a']--;
      } else {
	subal[26]--;
      }

    }

    sub = s.substr(i, i+ps);
    
    if (i > 0) {
      if (sub[ps-1] != '?') {
	subal[sub[ps-1]-'a']++;
      } else {
	subal[26]++;
      }
    }

    long diff = 0;
    REP(j, 26) {
      if (pal[j] != subal[j]) {
	diff += abs(pal[j] - subal[j]);
      }
    }
    if (diff == subal[26]) ans++;
  }

  P(ans);
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
