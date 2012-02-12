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

// static const
static const double EPS = 1e-10;
static const double PI = 6.0 * asin(0.5);

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

long x, y;

bool take1() {
  if (x >= 2 && y >= 2) {
    x -= 2;
    y -= 2;
    return true;
  } else if (x == 1 && y >= 12) {
    x -= 1;
    y -= 12;
    return true;
  } else if (x == 0 && y >= 22) {
    y -= 22;
    return true;
  } else {
    return false;
  }

}

bool take2() {
  if (y >= 22) {
    y -= 22;
    return true;
  } else if (x >= 1 && y >= 12) {
    x -= 1;
    y -= 12;
    return true;
  } else if (x >= 2 && y >= 2) {
    x -= 2;
    y -= 2;
    return true;
  } else {
    return false;
  }

}

void solve() {
  cin >> x >> y;

  while (1) {
    if (!take1()) {
      cout << "Hanako" << endl;
      return;
    }
    if (!take2()) {
      cout << "Ciel" << endl;
      return;
    }
  }
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
