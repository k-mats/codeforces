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

typedef pair<string, string> P;

void solve() {
  vector<P> vp;
  int n;

  cin >> n;

  string tmp1, tmp2;

  REP(i, n) {
    cin >> tmp1 >> tmp2;
    vp.PB(P(tmp1, tmp2));
  }

  REP(i, n) {
    if (vp[i].second == "rat") cout << vp[i].first << endl;
  }

  REP(i, n) {
    if (vp[i].second == "child" ||
	vp[i].second == "woman") cout << vp[i].first << endl;
  }

  REP(i, n) {
    if (vp[i].second == "man") cout << vp[i].first << endl;
  }

  REP(i, n) {
    if (vp[i].second == "captain") cout << vp[i].first << endl;
  }


}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
