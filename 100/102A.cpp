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

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

int n, m;

void solve() {
  cin >> n >> m;

  VL a;
  long tmp;
  REP(i, n) {
    cin >> tmp;
    a.PB(tmp);
  }

  int match[n+1][n+1];
  REP(i, n+1) {
    REP(j, n+1) {
      match[i][j] = 0;
    }
  }

  int tmp1, tmp2;
  REP(i, m) {
    cin >> tmp1 >> tmp2;
    match[tmp1][tmp2] = 1;
    match[tmp2][tmp1] = 1;
  }

  long ans = numeric_limits<long>::max();
  long sum = -1;
  FOR(i, 1, n-1) {
    FOR(j, i+1, n) {
      FOR(k, j+1, n+1) {
	if (match[i][j] == 1 && match[j][k] == 1 && match[i][k] == 1) {
	  sum = a[i-1] + a[j-1] + a[k-1];
	  ans = min(sum, ans);
	}
      }
    }
  }

  if (sum == -1) cout << - 1 << endl;
  else cout << ans << endl;
	
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
