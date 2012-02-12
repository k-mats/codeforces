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
static const double EPS = 1e-10;
static const double PI = 6.0 * asin(0.5);

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

typedef pair<int, int> PII;

void solve() {
  LL n;
  cin >> n;
  LL k;
  LL mini = numeric_limits<LL>::max();
  LL maxi = numeric_limits<LL>::min();
  vector<PII> vp;
  LL nn;
  // i == x - 1, j == y - 2, k == z - 2
  FORLL(i, 1, n+1) {
    if (n % i != 0) continue;
    nn = n / i;
    FORLL(j, 1, nn+1) {
      if (nn % j != 0) continue;
      if (i*j > n) continue;
      k = n / (i*j);
      if (i*j*k != n) continue;
      //      DUMP3(i+1, j+2, k+2);
      mini = min(mini, (i+1)*(j+2)*(k+2)-n);
      maxi = max(maxi, (i+1)*(j+2)*(k+2)-n);
    }
  }

  cout << mini << " " << maxi << endl;
      
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
