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

int toNum(char c) {
  if (c >= '0' && c <= '9') return (int)(c - '0');
  else return ((int)(c - 'A') + 10);
}

int mypow(int a, int b) {
  int rtn = 1;

  REP(i, b) {
    rtn *= a;
  }

  return rtn;
}

int toNum2(string s, int r) {
  int i = 0, j = 0;
  int rtn = 0;
  int tmp, tmp2;
  for (i = s.size()-1, j = 0; i >= 0; i--, j++) {
    tmp = toNum(s[i]);
    // tmp2 = (int)pow((double)r, (double)j);
    tmp2 = mypow(r, j);
    rtn += (tmp * tmp2);
  }

  return rtn;
}

bool func(string s, char c) {
  REP(i, s.size()-1) {
    if (s[i] > '0') return false;
  }

  if (s[s.size()-1] <= c) {
    return true;
  } else {
    return false;
  }
}

void solve() {
  string str = "", a = "", b = "";

  cin >> str;
  REP(i, str.size()) {
    if (str[i] == ':') {
      a = str.substr(0, i);
      b = str.substr(i+1, str.size() - i);
      break;
    }
  }

  if (func(a, 'N') && func(b, 'Z')) {
    P(-1);
    return;
  }

  int min_r = 0;
  int tmp;
  REP(i, a.size()) {
    tmp = toNum(a[i]);
    min_r = max(min_r, tmp);
  }

  REP(i, b.size()) {
    tmp = toNum(b[i]);
    min_r = max(min_r, tmp);
  }
   
  min_r++;
 
   
  int tmpa = toNum2(a, min_r);
  int tmpb = toNum2(b, min_r);
  if (tmpa > 23 || tmpb > 59) {
    P(0);
    return;
  }

  VI ans;
  ans.PB(min_r);

  int i = min_r + 1;
  int ta, tb;
  while(1) {
    ta = toNum2(a, i);
    tb = toNum2(b, i);
    
    if (ta > 23 || tb > 59) {
      break;
    } else {
      ans.PB(i);
    }
    i++;
  }

  REP(j, ans.size()) {
    cout << ans[j] << " ";
    //    if (j < ans.size()-1) cout << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
