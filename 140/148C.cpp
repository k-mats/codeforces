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

void solve() {
  int n, a, b;
  bool flag, flag2;
  cin >> n >> a >> b;

  LL g[n];
  g[0] = 1;
  LL gmax = g[0];
  LL gmin = g[0];
  LL sum = g[0];

  flag = true;
  flag2 = false;

  if (n <= a + b) {
    cout << -1 << endl;
    return;
  }

  if (n - a == 1 && n != 1) {
    cout << -1 << endl;
    return;
  }

  if (b == 0) {
    flag2 = true;
  }

  FOR(i, 1, n) {
    if (flag2) {
      g[i] = g[i-1];
      flag2 = false;
      continue;
    }
    if (b > 0) {
      LL tmp = sum + 1;
      if (tmp > 50000) {
	flag = false;
	break;
      }
      g[i] = tmp;
      sum += tmp;
      gmax = max(gmax, g[i]);
      b--;
    } else if (a > 0) {
      LL tmp = gmax + 1;
      if (tmp > 50000) {
	flag = false;
	break;
      }
      g[i] = tmp;
      gmax = max(gmax, g[i]);
      a--;
    } else {
      g[i] = gmin;
    }
  }
  
  if (flag == false) {
    cout << -1 << endl;
  } else {
    REP(i, n-1) cout << g[i] << " ";
    cout << g[n-1] << endl;
  }

}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
