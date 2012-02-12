#include <iostream>
#include <iomanip>
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

// repetition
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORL(i, a, b) for (long i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REPL(i, n) FORL(i, 0, n)

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

int n, k;

double calc(int x, int y, int px, int py) {
  double dx2 = (double)((x - px) * (x - px));
  double dy2 = (double)((y - py) * (y - py));

  return sqrt(dx2+dy2);
}

void solve() {
  cin >> n >> k;

  int x, y;
  int prev_x, prev_y;

  cin >> prev_x >> prev_y;

  double dir;
  double sum = 0.0;
  REP(i, n-1) {
    cin >> x >> y;
    dir = calc(x, y, prev_x, prev_y);
    sum += dir / 50.0;
    prev_x = x;
    prev_y = y;
  }

  cout << setprecision(10);
  cout << sum*(double)k << endl;
  
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
