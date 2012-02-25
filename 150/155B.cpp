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
  int n;
  cin >> n;
  
  int a[n];
  int b[n];

  REP(i, n) {
    cin >> a[i] >> b[i];
  }

  for (int i = 0; i < n-1; i++) {
    for (int j = n-1; j > i; j--) {
      if ((b[j-1] < b[j]) || (b[j-1] == b[j] && a[j-1] < a[j])) {
	int tmp = b[j];
	b[j] = b[j-1];
	b[j-1] = tmp;
	tmp = a[j];
	a[j] = a[j-1];
	a[j-1] = tmp;
      }
    }
  }

  LL cnt_a = 0, cnt_b = 1;

  for (int i = 0; (i < n && cnt_b > 0); i++) {
    cnt_b--;
    cnt_a += a[i];
    cnt_b += b[i];
  }

  P(cnt_a);
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
