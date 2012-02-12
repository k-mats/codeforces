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

bool isPrime(int x) {
  if (x < 2) return false;
  if (x == 2) {
    return true;
  }
  if (x % 2 == 0) return false;
  
  for (int i = 3; i * i <= x; i+=2) {
    if (x % i == 0) {
      return false;
    }
  }

  return true;
}

void solve() {
  int n, m;
  cin >> n >> m;

  if (!(isPrime(n) && isPrime(m))) {
    NO;
    return;
  }

  if (n == 2) {
    if (m != 3) {
      NO;
      return;
    } else {
      YES;
      return;
    }
  }

  for (int i = n+2; i < m; i+=2) {
    if (isPrime(i)) {
      NO;
      return;
    }
  }

  YES;

  
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
