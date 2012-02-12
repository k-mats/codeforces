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

void pSpaces(int a) {
  int k = n - a;
  
  REP(j, k) {
    cout << "  ";
  }
}

void pDigits(int a) {
  if (a == 0) {
    cout << a;
    return;
  }
  REP(i, a+1) {
    cout << i << " ";
  }
  for (int i = a-1; i >= 0; i--) {
    cout << i;
    if (i > 0) cout << " ";
  }
}

void solve() {
  cin >> n;

  REP(i, n+1) {
    pSpaces(i);
    pDigits(i);
    cout << endl;
  }
  for (int i = n-1; i >= 0; i--) {
    pSpaces(i);
    pDigits(i);
    cout << endl;
  }
}

int main(int argc, char *argv[]) {
  solve();

  return 0;
}
