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

int n;
typedef pair<string, long> P;

void solve() {
  cin >> n;
  vector<P> vp, vp2;
  string tmp1;
  int tmp2;
  REP(i, n) {
    cin >> tmp1 >> tmp2;
    vp.PB(P(tmp1, tmp2));
  }

  vector<P>::iterator it1, it2, it3, end;
  end = vp.end();
  advance(end, -1);
  for (it1 = vp.begin(); it1 != end; it1++) {
    for (it2 = end; it2 != it1; it2--) {
      it3 = it2;
      advance(it3, -1);
      if ((*it3).second > (*it2).second) {
	iter_swap(it2, it3);
      }
    }
  }

//   REPL(i, vp.size()) {
//     cout << vp[i].first << " " << vp[i].second << endl;
//   }

  REPL(i, vp.size()) {
    if (vp[i].second != 0 && vp[i].second > i) {
      cout << -1 << endl;
      return;
    }
  }

  long m;
  long h = 1000000;
    
  REPL(i, vp.size()) {
    if (vp[i].second == 0) {
      cout << vp[i].first << " " << h << endl;
      h++;
    } else {
      h -= (vp[i].second + 1);
      cout << vp[i].first << " " << h << endl;
      h += (vp[i].second + 1);
    }
  }
	  
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
