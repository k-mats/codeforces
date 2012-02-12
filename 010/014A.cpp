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
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

// debug
#define DUMP(a) cerr << #a << " = " << (a) << endl
#define DUMP2(a, b) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << endl
#define DUMP3(a, b, c) cerr << #a << " = " << (a) << ", " << #b << " = " << (b) << ", " << #c << " = " << (c) << endl

void solve() {
  int w, h;

  cin >> h >> w;

  int w_min = w-1, w_max = 0;
  int h_min = h-1, h_max = 0;

  VS field;
  string str;
  REP(i, h) {
    cin >> str;
    field.PB(str);
  }

  REP(i, h) {
    REP(j, w) {
      if (field[i][j] == '*') {
	w_min = min(w_min, j);
	w_max = max(w_max, j);
	h_min = min(h_min, i);
	h_max = max(h_max, i);
      }
    }
  }

  DUMP2(w_min, w_max);
  DUMP2(h_min, h_max);
  FOR(i, h_min, h_max+1) {
    FOR(j, w_min, w_max+1) {
      cout << field[i][j];
    }
    cout << endl;
  }
      
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
