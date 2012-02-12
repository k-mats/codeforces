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
  long a, x, y;
  cin >> a >> x >> y;

  if (y <= 0) {
    cout << - 1 << endl;
    return;
  }

  if (x <= -1*a || x >= a) {
    cout << -1 << endl;
    return;
  }
  if (y > 2*a && (abs(y)/a) % 2 == 1 && ((double)x <= (double)a / -2 || (double)x >= (double)a / 2)) {
    cout << -1 << endl;
    return;
  }
  if (y % a == 0) {
    cout << -1 << endl;
    return;
  }

  if (y > 0 && y < a) {
    cout << 1 << endl;
    return;
  }

  if (y > a && y < a*2) {
    cout << 2 << endl;
    return;
  }
 

  long cnt = 0;
  while (1) {
    // 3 blocks
    if ((cnt+2)*a < y && (cnt+4)*a > y) {
      // 2 blocks
      if ((cnt+2)*a < y && (cnt+3)*a > y) {
	if (x < 0) {
	  cout << (cnt/2+1)*3 << endl;
	  return;
	} else if (x > 0) {
	  cout << (cnt/2+1)*3+1 << endl;
	  return;
	} else {
	  cout << -1 << endl;
	  return;
	}
	// 1 block 
      } else {
	cout << (cnt/2+1)*3+2 << endl;
	return;
      }
    }
    cnt += 2;
  }
	       
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
