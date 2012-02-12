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

void solve() {
  int n;
  cin >> n;

  VI sol;
  int tmp;
  REP(i, n) {
    cin >> tmp;
    sol.PB(tmp);
  }

  int a, b, diff = numeric_limits<int>::max();
  REP(i, n) {
    int j = i+1;
    if (j == n) j -= n;
    if (abs(sol[i]-sol[j]) < diff) {
      a = i;
      b = j;
      diff = abs(sol[i]-sol[j]);
    }
    j = i-1;
    if (j == -1) j += n;
    if (abs(sol[i]-sol[j]) < diff) {
      a = i;
      b = j;
      diff = abs(sol[i]-sol[j]);
    }
  }

  cout << a+1 << " " << b+1 << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
