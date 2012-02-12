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

void solve() {
  int n;
  cin >> n;
  int a[n];
  int maxi = numeric_limits<int>::min();
  int maxi_i = -1;
  int mini = numeric_limits<int>::max();
  int mini_i = n;
  REP(i, n) {
    cin >> a[i];
    if (a[i] > maxi || (a[i] == maxi && i < maxi_i)) {
      maxi = a[i];
      maxi_i = i;
    }
    if (a[i] < mini || (a[i] == mini && i > mini_i)) {
      mini = a[i];
      mini_i = i;
    }
  }

  int ans = 0;
  ans += maxi_i;
  ans += (n-1 - mini_i);
  if (maxi_i > mini_i) ans--;
  
  P(ans);
  
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
