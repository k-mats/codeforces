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

string ltoa(long x) {
  stringstream ss;
  ss << x;
  return ss.str();
}

bool isLucky(string str) {
  REP(i, str.size()) {
    if (str[i] != '4' && str[i] != '7') 
      return false;
  }
  return true;
}

string toLucky(string str) {
  while (!isLucky(str)) {
    REP(i, str.size()) {
      if (str[i] != '4' && str[i] != '7') {
	string tmp_str = str.substr(0, i) + str.substr(i+1, str.size());
	str = tmp_str;
	break;
      }
    }
  }

  return str;
}

void solve() {
  string sa, sb;
  long la, lb;
  cin >> sa >> sb;
  la = atol(sa.c_str());
  lb = atol(sb.c_str());

  if (lb > la) {
    P(lb);
    return;
  }
  
  while (1) {
    la++;
    sa = toLucky(ltoa(la));

    if (sa == sb) {
      P(la);
      return;
    }
  }
  
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
