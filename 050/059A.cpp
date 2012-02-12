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

string toUpper(string s) {
  REP(i, s.size()) {
    if (s[i] >= 'a' && s[i] <= 'z') 
      s[i] += ('A' - 'a');
  }

  return s;
}

string toLower(string s) {
  REP(i, s.size()) {
    if (s[i] >= 'A' && s[i] <= 'Z') 
      s[i] += ('a' - 'A');
  }
  return s;
}

void solve() {
  int u = 0, l = 0;
  string s;

  cin >> s;

  REP(i, s.size()) {
    if (s[i] >= 'a' && s[i] <= 'z') l++;
    else u++;
  }

  if (u > l) s = toUpper(s);
  else s = toLower(s);

  cout << s << endl;
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
