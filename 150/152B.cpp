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

typedef pair<LL, LL> PLL;

void solve() {
  LL n, m;
  cin >> n >> m;
  LL xc, yc;
  cin >> xc >> yc;
  int k;
  cin >> k;
  vector<PLL> vp;

  LL xt, yt;
  REP(i, k) {
    cin >> xt >> yt;
    vp.PB(PLL(xt, yt));
  }

  LL nx, ny;
  LL dx, dy;
  LL x_steps, y_steps;
  LL less_steps;
  LL steps = 0;

  REP(i, k) {
    if (vp[i].first >= 0) {
      dx = n - xc;
    } else {
      dx = xc - 1;
    }
    if (vp[i].second >= 0) {
      dy = m - yc;
    } else {
      dy = yc - 1;
    }

    if (vp[i].first != 0 && vp[i].second != 0) {
      x_steps = dx / abs(vp[i].first);
      y_steps = dy / abs(vp[i].second);
      less_steps = min(x_steps, y_steps);
    } else if (vp[i].first == 0 && vp[i].second != 0) {
      y_steps = dy / abs(vp[i].second);
      less_steps = y_steps;
    } else if (vp[i].first != 0 && vp[i].second == 0) {
      x_steps = dx / abs(vp[i].first);
      less_steps = x_steps;
    }
    steps += less_steps;
    xc += (vp[i].first * less_steps);
    yc += (vp[i].second * less_steps);
    
  }

  P(steps);
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
