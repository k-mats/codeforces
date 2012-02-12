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

int func(int base, int n) {
  int m = 1;
  while (1) {
    if (m > n) {
      m /= base;
      break;
    }
    m *= base;
  }
  DUMP(m);
  int tmp;
  int rtn = 0;
  while (m >= 1) {
    tmp = n / m;
    rtn += tmp;
    n -= m * tmp;
    m /= base;
    DUMP3(rtn, n, m);
  }

  return rtn;
}

int gcd(int m, int n) {
  if (m == 0 || n == 0) return 1;

  while (m != n) {
    if (m > n) m -= n;
    else n -= m;
  }

  return m;
}

void solve() {
  int n;
  cin >> n;
  int x, y;
  y = n - 2;
  x = 0;

  FOR(i, 2, n) {
    DUMP(i);
    x += func(i, n);
    DUMP(x);
  }
  
  int g = gcd(x, y);
  x /= g;
  y /= g;

  cout << x << "/" << y << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
