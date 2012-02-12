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

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

int a[4];

bool isTriangle(int i, int j, int k) {
  if (a[i] < a[j] + a[k])
    return true;
  else
    return false;
}

bool isSegment(int i, int j, int k) {
  if (a[i] == a[j] + a[k])
    return true;
  else
    return false;
}

void solve() {

  REP(i, 4) {
    cin >> a[i];
  }

  sort(a, a+4, greater<int>());

  FOR(i, 0, 2) {
    FOR(j, i+1, 3) {
      FOR(k, j+1, 4) {
	if (isTriangle(i, j, k)) {
	  cout << "TRIANGLE" << endl;
	  return;
	}
      }
    }
  }
  FOR(i, 0, 2) {
    FOR(j, i+1, 3) {
      FOR(k, j+1, 4) {
	if (isSegment(i, j, k)) {
	  cout << "SEGMENT" << endl;
	  return;
	}
      }
    }
  }

  cout << "IMPOSSIBLE" << endl;

}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
