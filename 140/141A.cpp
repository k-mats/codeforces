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

typedef pair<char, int> P;
void solve() {
  char c;
  vector<P> vp;
  
  while((c = getchar()) != '\n') {
    vp.PB(P(c, 0));
  }
  while((c = getchar()) != '\n') {
    vp.PB(P(c, 0));
  }

  bool flag = false;
  while((c = getchar()) != '\n') {
    flag = false;
    REP(i, vp.size()) {
      if (vp[i].first == c && vp[i].second == 0) {
	vp[i].second = 1;
	flag = true;
	break;
      } 
    }
    if (flag == false) {
      cout << "NO" << endl;
      return;
    }
  }
  REP(i, vp.size()) {
    if (vp[i].second == 0) {
      cout << "NO" << endl;
      return;
    } 
  }
  cout << "YES" << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
