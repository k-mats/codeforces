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

string a, b, c;

string ltoa(long n) {
  ostringstream os;
  os << n;

  return os.str();
}

void solve() {
  cin >> a >> b;

  long al, bl, cl;

  al = atol(a.c_str());
  bl = atol(b.c_str());

  cl = al + bl;

  c = ltoa(cl);

  DUMP3(a, b, c);
  DUMP3(al, bl, cl);

  string a2 = "", b2 = "", c2 = "";

  REP(i, a.size()) {
    if (a[i] != '0') a2.PB(a[i]);
  }

  REP(i, b.size()) {
    if (b[i] != '0') b2.PB(b[i]);
  }

  REP(i, c.size()) {
    if (c[i] != '0') c2.PB(c[i]);
  }

  DUMP3(a2, b2, c2);
  
  long al2, bl2, cl2;
  al2 = atol(a2.c_str());
  bl2 = atol(b2.c_str());
  cl2 = atol(c2.c_str());

  DUMP3(al2, bl2, cl2);

  if (al2 + bl2 == cl2) cout << "YES" << endl;
  else cout << "NO" << endl;
  

}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
