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

#define MAX 3001

int p[MAX];

void solve() {
  int n;
  cin >> n;

  int almost = 0;
  FOR(i, 3, n+1) {
    int cnt = 0;
    if (i%2 == 0) cnt++;
    for (int j = 3; j <= i/2; j+=2) {
      if (p[j] == 1 && i%j == 0) {
	cnt++;
      }
    }
    if (cnt == 2) {
      almost++;
    }
  }

  P(almost);

}

int main(int argc, char *argv[]) {
  REP(i, MAX) p[i] = 1;

  p[0] = 0;
  for (int i = 2; i*i <= MAX; i++) {
    for (int j = 2; i*j <= MAX; j++) {
      if (p[i*j] == 1) 
	p[i*j] = 0;
    }
  }

//   REP(i, MAX) {
//     if (p[i] == 1)
//       cout << i << " ";
//   }
//   cout << endl;

  solve();

  return 0;
}
