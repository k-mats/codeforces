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
  string s, e, c;
  cin >> s >> e;
  
  c = s;
  VS moves;  
  while (c != e) {
    if (c[0] == e[0]) {
      if (c[1] < e[1]) {
	c[1]++;
	moves.PB("U");
      } else {
	c[1]--;
	moves.PB("D");
      }
    } else if (c[1] == e[1]) {
      if (c[0] < e[0]) {
	c[0]++;
	moves.PB("R");
      } else {
	c[0]--;
	moves.PB("L");
      }
    } else {
      if (c[0] < e[0] && c[1] < e[1]) {
	c[0]++;
	c[1]++;
	moves.PB("RU");
      } else if (c[0] < e[0] && c[1] > e[1]) {
	c[0]++;
	c[1]--;
	moves.PB("RD");
      } else if (c[0] > e[0] && c[1] < e[1]) {
	c[0]--;
	c[1]++;
	moves.PB("LU");
      } else if (c[0] > e[0] && c[1] > e[1]) {
	c[0]--;
	c[1]--;
	moves.PB("LD");
      }  
    }
  }
    
  P(moves.size());

  REP(i, moves.size()) {
    P(moves[i]);
  }

  
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
