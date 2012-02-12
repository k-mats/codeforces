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
#define FORLL(i, a, b) for (LL i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REPL(i, n) FORL(i, 0, n)
#define REPLL(i, n) FORLL(i, 0, n)

// output
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define P(x) cout << (x) << endl

// static const
static const double EPS = 1e-15;
static const double PI = 6.0 * asin(0.5);

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

typedef pair<LL, LL> PII;

vector<PII> vp;
LL xa, ya, xb, yb;
LL n;


void setpv() {
  if (xb < xa && yb < ya) {
    // xa < xb, ya < yb
    swap(xa, xb);
    swap(ya, yb);
  }
  if (xa < xb && ya > yb) {
    // xa > xb, ya < yb
    swap(xa, xb);
    swap(ya, yb);
  }
  if (xa > xb && ya < yb) {
    // xa < xb, ya < yb
    swap(xa, xb);
  }

  DUMP2(xa, ya);
  DUMP2(xb, yb);

  FORLL(i, xa+1, xb) {
    vp.PB(PII(i, ya));
    vp.PB(PII(i, yb));
  }
  FORLL(i, ya+1, yb) {
    vp.PB(PII(xa, i));
    vp.PB(PII(xb, i));
  }
  vp.PB(PII(xa, ya));
  vp.PB(PII(xa, yb));
  vp.PB(PII(xb, ya));
  vp.PB(PII(xb, yb));

  REP(i, vp.size()) {
    DUMP3(i, vp[i].first, vp[i].second);
  }
}

void solve() {


  cin >> xa >> ya >> xb >> yb;
  cin >> n;
  LL x[n], y[n], r[n];
  REPLL(i, n) {
    cin >> x[i] >> y[i] >> r[i];
  }
 
  setpv();
  
  bool warm = false;
  LL ans = 0;
  LL xt, yt;
  REPLL(i, vp.size()) {
    xt = vp[i].first;
    yt = vp[i].second;
    warm = false;
    REPLL(j, n) {
      LL dist = (xt-x[j])*(xt-x[j]) + (yt-y[j])*(yt-y[j]);
      if (dist <= r[j]*r[j]) {
	warm = true;
	break;
      }
    }
    if (!warm) ans++;
  }
  P(ans);
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
